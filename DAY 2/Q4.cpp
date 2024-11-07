#include <iostream>
using namespace std;

float gradeToPoint(char grade) {
    switch (grade) {
        case 'A': return 10.0;
        case 'B': return 8.0;
        case 'C': return 6.0;
        case 'D': return 5.0;
        case 'E': return 4.0;
        case 'F': return 0.0;
        default: return 0.0;
    }
}

int main() {
    int numSubjects;
    cout << "Enter the number of subjects: ";
    cin >> numSubjects;

    int credits[numSubjects];
    char grades[numSubjects];
    float totalPoints = 0.0;
    int totalCredits = 0;

    for (int i = 0; i < numSubjects; i++) {
        cout << "Enter the credits for subject " << i + 1 << ": ";
        cin >> credits[i];
        cout << "Enter the grade (A/B/C/D/E/F) for subject " << i + 1 << ": ";
        cin >> grades[i];

        totalPoints += credits[i] * gradeToPoint(grades[i]);
        totalCredits += credits[i];
    }

    float sgpa = totalPoints / totalCredits;
    cout << "SGPA: " << sgpa << endl;

    return 0;
}
