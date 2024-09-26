#include <iostream>
using namespace std;
class SectionA; // Forward declaration
class SectionB
{
    int marks[5];
public:
    void inputMarks()
    {
        cout << "Enter marks for 5 students in Section B:\n";
        for (int i = 0; i < 5; ++i)
        {
            cout << "Student " << i + 1 << ": ";
            cin >> marks[i];
        }
    }
    friend float calculateAverage(SectionA, SectionB); // Friend function declaration
};
class SectionA
{
    int marks[5];
public:
    void inputMarks()
    {
        cout << "Enter marks for 5 students in Section A:\n";
        for (int i = 0; i < 5; ++i)
        {
            cout << "Student " << i + 1 << ": ";
            cin >> marks[i];
        }
    }
    friend float calculateAverage(SectionA, SectionB); // Friend function declaration
};
float calculateAverage(SectionA a, SectionB b)
{
    int total = 0;
    for (int i = 0; i < 5; ++i)
    {
        total += a.marks[i];
        total += b.marks[i];
    }
    return total / 10.0; // Calculate average of all 10 students
}
int main()
{
    SectionA sectionA;
    SectionB sectionB;
    sectionA.inputMarks();
    sectionB.inputMarks();
    float avg = calculateAverage(sectionA, sectionB);
    cout << "The average marks of 10 students (from both sections) is: " << avg << endl;
    return 0;
}