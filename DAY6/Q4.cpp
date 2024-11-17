#include <iostream>
using namespace std;

// Base class
class Shape {
public:
    virtual void area() {
        cout << "Area of Shape." << endl;
    }
};

// Derived class
class Rectangle : public Shape {
private:
    float length, width;
public:
    Rectangle(float l, float w) : length(l), width(w) {}
    void area() override {
        cout << "Area of Rectangle: " << length * width << endl;
    }
};

int main() {
    Shape* shape = new Rectangle(5.0, 3.0);
    shape->area();  // Calls Rectangle's area()
    delete shape;
    return 0;
}
