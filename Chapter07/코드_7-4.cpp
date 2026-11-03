#include <iostream>
using namespace std;

class Box {
private:
    int width;
    int height;

public:
    Box() {
        width = 1;
        height = 1;
    }

    Box(int size) {
        width = size;
       height = size;
    }

    Box(int w, int h) {
        width = w;
        height = h;
    }

    int getArea() {
        return width * height;
    }
};

int main() {
    Box b1;
    Box b2(5);
    Box b3(4, 6);

    cout << "b1 넓이: " << b1.getArea() << endl;
    cout << "b2 넓이: " << b2.getArea() << endl;
    cout << "b3 넓이: " << b3.getArea() << endl;

    return 0;
}
