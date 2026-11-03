#include <iostream>
using namespace std;

class Shape {
public:
    virtual double getArea() = 0;

    virtual void printArea() {
        cout << "넓이: " << getArea() << endl;
    }

    virtual ~Shape() {}
};

class Rectangle : public Shape {
private:
    double width;
    double height;

public:
    Rectangle(double w, double h) {
        width = w;
        height = h;
    }

    double getArea() override {
        return width * height;
    }
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) {
        radius = r;
    }

    double getArea() override {
        return 3.14 * radius * radius;
    }
};

int main() {
    Rectangle rect(4, 5);
    Circle circle(3);

    Shape *shapes[2] = { &rect, &circle };

    for (int i = 0; i < 2; i++) {
        shapes[i]->printArea();
    }

    return 0;
}
