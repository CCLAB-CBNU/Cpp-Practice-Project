#include <cctype>
#include <iostream>
#include <queue>
#include <stack>
#include <stdexcept>
#include <string>
using namespace std;

bool isOperator(char token) {
    return token == '+' ||
             token == '-' ||
             token == '*' ||
             token == '/';
}

int precedence(char operation) {
    if (operation == '+' ||
        operation == '-') {
        return 1;
    }

    if (operation == '*' ||
        operation == '/') {
        return 2;
    }

    return 0;
}

queue<string> toPostfix(
    const string& expression
) {
    queue<string> output;
    stack<char> operators;

    for (int i = 0;
         i < static_cast<int>(expression.size());
         i++) {
        char token = expression[i];

        if (isspace(
                static_cast<unsigned char>(token)
            )) {
            continue;
        }

        if (isdigit(
                static_cast<unsigned char>(token)
            )) {
            string number;

            while (
                i < static_cast<int>(
                        expression.size()
                    ) &&
                isdigit(
                    static_cast<unsigned char>(
                        expression[i]
                    )
                )
            ) {
                number += expression[i];
                i++;
            }

            i--;
            output.push(number);
        } else if (token == '(') {
            operators.push(token);
        } else if (token == ')') {
            bool foundOpening = false;

            while (!operators.empty()) {
                if (operators.top() == '(') {
                    operators.pop();
                    foundOpening = true;
                    break;
                }

                output.push(
                    string(1, operators.top())
                );
                operators.pop();
            }

            if (!foundOpening) {
                throw invalid_argument(
                    "괄호의 짝이 맞지 않습니다."
                );
            }
        } else if (isOperator(token)) {
            while (
                !operators.empty() &&
                operators.top() != '(' &&
                precedence(operators.top()) >=
                    precedence(token)
            ) {
                output.push(
                    string(1, operators.top())
                );
                operators.pop();
            }

            operators.push(token);
        } else {
            throw invalid_argument(
                "지원하지 않는 문자가 포함되어 있습니다."
            );
        }
    }

    while (!operators.empty()) {
        if (operators.top() == '(') {
            throw invalid_argument(
                "괄호의 짝이 맞지 않습니다."
            );
        }

        output.push(
            string(1, operators.top())
        );

        operators.pop();
    }

    return output;
}

int calculate(
    int left,
    int right,
    char operation
) {
    switch (operation) {
    case '+':
        return left + right;

    case '-':
        return left - right;

    case '*':
        return left * right;

    case '/':
        if (right == 0) {
            throw runtime_error(
                "0으로 나눌 수 없습니다."
            );
        }

        return left / right;

    default:
        throw invalid_argument(
            "알 수 없는 연산자입니다."
        );
    }
}

int evaluatePostfix(
    queue<string> postfix
) {
    stack<int> values;

    while (!postfix.empty()) {
        string token = postfix.front();
        postfix.pop();

        if (isdigit(
                static_cast<unsigned char>(
                    token[0]
                )
            )) {
            values.push(stoi(token));
            continue;
        }

        if (values.size() < 2) {
            throw invalid_argument(
                "피연산자가 부족합니다."
            );
        }

        int right = values.top();
        values.pop();

        int left = values.top();
        values.pop();

        values.push(
            calculate(
                left,
                right,
                token[0]
            )
        );
    }

    if (values.size() != 1) {
        throw invalid_argument(
            "올바르지 않은 수식입니다."
        );
    }

    return values.top();
}

int main() {
    string expression;

    cout << "수식을 입력하세요: ";
    getline(cin, expression);

    try {
        queue<string> postfix =
            toPostfix(expression);

        queue<string> copiedPostfix =
            postfix;

        cout << "후위 표기식: ";

        while (!copiedPostfix.empty()) {
            cout << copiedPostfix.front()
                 << " ";

            copiedPostfix.pop();
        }

        cout << endl;

        int result =
            evaluatePostfix(postfix);

        cout << "계산 결과: "
             << result
             << endl;
    }
    catch (const exception& error) {
        cout << "오류: "
             << error.what()
             << endl;
    }

    return 0;
}
