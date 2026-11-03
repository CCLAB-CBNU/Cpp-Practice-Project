#include <iostream>
#include <iomanip>
#include "NeuralNetwork.h"
using namespace std;

int main() {
    NeuralNetwork nn(2, 4, 1);   // 입력 2, 은닉 4, 출력 1

    vector<vector<double>> inputs  = {{0,0}, {0,1}, {1,0}, {1,1}};
    vector<vector<double>> targets = {{0},   {1},   {1},   {0}};

    cout << "[학습 시작]\n";
    nn.train(inputs, targets, 0.5, 10000);

    cout << "\n[학습 결과] XOR\n";
    cout << fixed << setprecision(4);
    for (size_t i = 0; i < inputs.size(); i++) {
        double y = nn.predict(inputs[i])[0];
        cout << "  " << inputs[i][0] << ", " << inputs[i][1] << " -> " << y
             << "  (반올림 " << (y > 0.5 ? 1 : 0) << ")\n";
    }
    return 0;
}
