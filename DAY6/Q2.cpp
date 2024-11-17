#include <iostream>
using namespace std;

// Base class 1
class Student {
protected:
    string name;
    int rollNo;
public:
    void getStudentInfo() {
        cout << "Enter student name: ";
        cin >> name;
        cout << "Enter roll number: ";
        cin >> rollNo;
    }
};

// Base class 2
class Exam {
protected:
    int marks1, marks2;
public:
    void getExamMarks() {
        cout << "Enter marks for subject 1: ";
        cin >> marks1;
        cout << "Enter marks for subject 2: ";
        cin >> marks2;
    }
};

// Derived class
class Result : public Student, public Exam {
public:
    void displayResult() {
        int total = marks1 + marks2;
        cout << "\nStudent Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Marks in Subject 1: " << marks1 << endl;
        cout << "Marks in Subject 2: " << marks2 << endl;
        cout << "Total Marks: " << total << endl;
    }
};

int main() {
    Result res;
    res.getStudentInfo();
    res.getExamMarks();
    res.displayResult();
    return 0;
}
