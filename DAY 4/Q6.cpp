#include <iostream>
#include <cmath> // For M_PI constant

using namespace std;

class Shape {
public:
    // Function to calculate the area of a triangle
    double area(double base, double height) {
        return 0.5 * base * height;
    }

    // Function to calculate the area of a rectangle
    double area(double length, int width) {
        return length * width;
    }

    // Function to calculate the area of a circle
    double area(double radius) {
        return M_PI * radius * radius;
    }
};

int main() {
    Shape shape;

    // Calculate area of a triangle
    double triangleArea = shape.area(10, 5);
    cout << "Area of triangle: " << triangleArea << endl;

    // Calculate area of a rectangle
    double rectangleArea = shape.area(10.0, 5.0);
    cout << "Area of rectangle: " << rectangleArea << endl;

    // Calculate area of a circle
    double circleArea = shape.area(5.0);
    cout << "Area of circle: " << circleArea << endl;

    return 0;
}
