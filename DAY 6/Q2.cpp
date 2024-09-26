#include <iostream>
using namespace std;

class Student {
    private:
        float marks;
    public:
        // Constructor to initialize marks
        Student() : marks(0.0) {}

        // Method to set marks
        void setMarks(float m) {
            marks = m;
        }

        // Friend function to calculate the average
        friend float calculateAverage(Student section1[], Student section2[]);
};

// Friend function definition to calculate the average
float calculateAverage(Student section1[], Student section2[]) {
    float total = 0.0;
    
    // Summing marks for section 1
    for (int i = 0; i < 5; i++) {
        total += section1[i].marks;
    }

    // Summing marks for section 2
    for (int i = 0; i < 5; i++) {
        total += section2[i].marks;
    }

    // Calculate and return the average
    return total / 10;  // Since there are 10 students in total
}

int main() {
    Student section1[5], section2[5];

    // Input marks for section 1
    cout << "Enter the marks for 5 students in Section 1:" << endl;
    for (int i = 0; i < 5; i++) {
        float marks;
        cout << "Student " << i + 1 << ": ";
        cin >> marks;
        section1[i].setMarks(marks);  // Set marks for each student
    }

    // Input marks for section 2
    cout << "Enter the marks for 5 students in Section 2:" << endl;
    for (int i = 0; i < 5; i++) {
        float marks;
        cout << "Student " << i + 1 << ": ";
        cin >> marks;
        section2[i].setMarks(marks);  // Set marks for each student
    }

    // Calculate and display the average using friend function
    float average = calculateAverage(section1, section2);
    cout << "The average marks of all 10 students is: " << average << endl;

    return 0;
}
