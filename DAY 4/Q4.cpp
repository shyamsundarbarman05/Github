#include <iostream>
using namespace std;

class Employee {
private:
    static int employeeCount;  // Static variable to count the number of employees

public:
    Employee() {
        employeeCount++;  // Increment the count when a new object is created
    }

    static int getEmployeeCount() {
        return employeeCount;  // Static member function to return the employee count
    }
};

// Initialize the static variable
int Employee::employeeCount = 0;

int main() {
    Employee emp1;
    Employee emp2;
    Employee emp3;

    cout << "Total number of employees: " << Employee::getEmployeeCount() << endl;

    return 0;
}
