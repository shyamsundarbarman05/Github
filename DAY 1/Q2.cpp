#include <iostream>
#include <string>
using namespace std;
struct Student
{
    string name;
    string rollNumber;
};
int main()
{
    Student students[] = {
        {"Sayan", "32"}, {"Debasmita", "27"}, {"Snehasish", "12"}, {"Abhishek", "11"}, {"Shyamsundar", "35"}, {"Sougata", "3"}};
    string searchInput;
    cout << "Enter the student name or roll number: ";
    cin >> searchInput;
    for (const auto &student : students)
    {
        if (student.name == searchInput || student.rollNumber == searchInput)
        {
            cout << "Yes, " << student.name << " is present in the class." << endl;
            return 0;
        }
    }
    cout << "No, " << searchInput << " is not present in the class." << endl;
    return 0;
}
