#include <bits/stdc++.h>
using namespace std;
int main()
{
    int feet1, feet2, inches1, inches2;
    cout << "Enter the first distance in feet: ";
    cin >> feet1;
    cout << "Enter the first distance in inches: ";
    cin >> inches1;
    cout << "Enter the second distance in feet: ";
    cin >> feet2;
    cout << "Enter the second distance in inches: ";
    cin >> inches2;
    int totalFeet = feet1 + feet2;
    int totalInches = inches1 + inches2;
    totalFeet += totalInches / 12;
    totalInches %= 12;
    cout << "Total distance: " << totalFeet << " feet " << totalInches << " inches" << endl;
    return 0;
}