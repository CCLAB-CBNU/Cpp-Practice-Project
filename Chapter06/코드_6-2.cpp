#include <iostream>
using namespace std;

class Rectangle {
public:
    int width;
    int height;

    int getArea() {
        return width * height;
    }

    void printArea() {
        cout << "넓이: " << getArea() << endl;
    }
};

int main() {
    Rectangle r;
    r.width = 5;
    r.height = 3;
    r.printArea();
    return 0;
}
