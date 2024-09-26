#include <iostream>
using namespace std;
int main()
{
    int marks;
    cout << "Enter the marks: ";
    cin >> marks;
    if (marks >= 90)
    {
        cout << "Grade: A+";
    }
    else if (marks >= 80)
    {
        cout << "Grade: A";
    }
    else if (marks >= 70)
    {
        cout << "Grade: B+";
    }
    else if (marks >= 60)
    {
        cout << "Grade: B";
    }
    else if (marks >= 50)
    {
        cout << "Grade: C+";
    }
    else if (marks >= 40)
    {
        cout << "Grade: C";
    }
    else if (marks >= 30)
    {
        cout << "Grade: D";
    }
    else
    {
        cout << "Better luck next time ";
    }
    return 0;
}