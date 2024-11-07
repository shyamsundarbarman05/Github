#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    int age;
    double salary;

public:
    // Default constructor
    Employee() {
        name = "Unknown";
        age = 0;
        salary = 0.0;
        cout << "Default constructor called: " << name << ", " << age << ", " << salary << endl;
    }

    // Parameterized constructor
    Employee(string n, int a, double s) {
        name = n;
        age = a;
        salary = s;
        cout << "Parameterized constructor called: " << name << ", " << age << ", " << salary << endl;
    }

    // Copy constructor
    Employee(const Employee& emp) {
        name = emp.name;
        age = emp.age;
        salary = emp.salary;
        cout << "Copy constructor called: " << name << ", " << age << ", " << salary << endl;
    }

    // Destructor
    ~Employee() {
        cout << "Destructor called for: " << name << endl;
    }

    // Display method
    void display() {
        cout << "Employee Name: " << name << ", Age: " << age << ", Salary: $" << salary << endl;
    }
};

int main() {
    // Default constructor
    Employee emp1;

    // Parameterized constructor
    Employee emp2("John Doe", 30, 50000);

    // Copy constructor
    Employee emp3 = emp2;

    // Display employee information
    emp1.display();
    emp2.display();
    emp3.display();

    return 0;
}
