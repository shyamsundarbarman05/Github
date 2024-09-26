#include <iostream>
#include <vector>
using namespace std;
class Employee
{
    string name;
    int id;
public:
    void inputDetails()
    {
        cout << "Enter employee name: ";
        cin.ignore(); // To ignore any leftover newline character in the input buffer
        getline(cin, name);
        cout << "Enter employee ID: ";
        cin >> id;
    }
    void displayDetails() const
    {
        cout << "Name: " << name << ", ID: " << id << endl;
    }
};
class Department
{
    vector<Employee> employees;
public:
    void addEmployee()
    {
        Employee emp;
        emp.inputDetails();
        employees.push_back(emp);
    }
    void displayAllEmployees() const
    {
        cout << "Employee details:\n";
        for (const auto &emp : employees)
        {
            emp.displayDetails();
        }
        cout << "Total number of employees: " << employees.size() << endl;
    }
};
int main()
{
    Department dept;
    int num;
    cout << "Enter the number of employees: ";
    cin >> num;
    for (int i = 0; i < num; ++i)
    {
        cout << "Entering details for employee " << i + 1 << ":\n";
        dept.addEmployee();
    }
    dept.displayAllEmployees();
    return 0;
}