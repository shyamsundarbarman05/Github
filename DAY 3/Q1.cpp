#include <iostream>
using namespace std;
float calculateSimpleInterest(float principal, float time, float rate = 15.0)
{
    return (principal * time * rate) / 100;
}
float calculateSimpleInterestDefault(float principal, float time)
{
    return calculateSimpleInterest(principal, time);
}
int main()
{
    float principal, time, rate;
    char choice;
    cout << "Enter the amount: ";
    cin >> principal;
    cout << "Amount entered: " << principal << " Rupees" << endl;
    cout << "Enter the time in years: ";
    cin >> time;
    cout << "Do you want to enter a custom rate of interest? (y/n): ";
    cin >> choice;
    if (choice == 'y' || choice == 'Y')
    {
        cout << "Enter the rate of interest: ";
        cin >> rate;
        cout << "The simple interest is: " << calculateSimpleInterest(principal, time, rate) << endl;
    }
    else
    {
        cout << "The simple interest is: " << calculateSimpleInterestDefault(principal, time) << endl;
    }
    return 0;
}