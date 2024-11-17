#include <iostream>
#include <string>
using namespace std;

// Base class
class Student {
protected:
    int studentID;
    string name;

public:
    void registerStudent(int id, string studentName) {
        studentID = id;
        name = studentName;
    }

    void displayStudent() {
        cout << "Student ID: " << studentID << endl;
        cout << "Name: " << name << endl;
    }
};

// Derived class from Student
class AcademicDetails : public Student {
protected:
    string course;
    int year;

public:
    void setAcademicDetails(string courseName, int yearOfStudy) {
        course = courseName;
        year = yearOfStudy;
    }

    void displayAcademicDetails() {
        displayStudent();
        cout << "Course: " << course << endl;
        cout << "Year of Study: " << year << endl;
    }
};

// Further derived class from AcademicDetails
class FeeDetails : public AcademicDetails {
private:
    float feeAmount;
    bool isFeePaid;

public:
    void setFeeDetails(float amount, bool feeStatus) {
        feeAmount = amount;
        isFeePaid = feeStatus;
    }

    void displayFeeDetails() {
        displayAcademicDetails();
        cout << "Fee Amount: $" << feeAmount << endl;
        cout << "Fee Status: " << (isFeePaid ? "Paid" : "Not Paid") << endl;
    }
};

int main() {
    FeeDetails student1;

    // Registering the student and setting details
    student1.registerStudent(101, "John Doe");
    student1.setAcademicDetails("Computer Science", 2);
    student1.setFeeDetails(1500.50, true);

    // Displaying all the details
    cout << "Student Registration Details:\n";
    student1.displayFeeDetails();

    return 0;
}
