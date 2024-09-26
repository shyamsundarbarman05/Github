#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int id;
    double salary;

    static int employeeCount;  // Static variable to count employees

public:
    // Constructor to initialize employee details
    Employee(string empName, int empId, double empSalary) {
        name = empName;
        id = empId;
        salary = empSalary;
        employeeCount++;  // Increment the count when a new employee is added
    }

    // Function to display employee details
    void displayDetails() const {
        cout << "Employee ID: " << id << ", Name: " << name << ", Salary: " << salary << endl;
    }

    // Static function to get the count of employees
    static int getEmployeeCount() {
        return employeeCount;
    }
};

// Initialize the static member
int Employee::employeeCount = 0;

int main() {
    vector<Employee> employees;  // Vector to store employee objects

    // Input employee details
    int numEmployees;
    cout << "Enter the number of employees in the department: ";
    cin >> numEmployees;

    for (int i = 0; i < numEmployees; i++) {
        string name;
        int id;
        double salary;

        cout << "Enter details for Employee " << (i + 1) << ":" << endl;
        cout << "Name: ";
        cin >> name;
        cout << "ID: ";
        cin >> id;
        cout << "Salary: ";
        cin >> salary;

        // Create an employee object and add it to the vector
        employees.push_back(Employee(name, id, salary));
    }

    // Display employee details
    cout << "\nEmployee Details:\n";
    for (const auto& emp : employees) {
        emp.displayDetails();
    }

    // Display total number of employees
    cout << "Total number of employees in the department: " << Employee::getEmployeeCount() << endl;

    return 0;
}
