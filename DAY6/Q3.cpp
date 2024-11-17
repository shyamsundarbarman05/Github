#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imag;

public:
    // Constructor to initialize complex numbers
    Complex(float r = 0, float i = 0) : real(r), imag(i) {}

    // Overloading + operator to add two complex numbers
    Complex operator+(const Complex& other) {
        // Adding real and imaginary parts separately
        return Complex(real + other.real, imag + other.imag);
    }

    // Function to display complex number
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex num1(3.5, 2.5), num2(1.5, 4.5);
    
    // Using overloaded + operator to add two complex numbers
    Complex result = num1 + num2;
    
    cout << "Result of addition: ";
    result.display();

    return 0;
}
