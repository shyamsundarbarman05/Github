#include <iostream>
using namespace std;
int main()
{
    string str1, str2;
    cout << "Enter the first string: ";
    getline(cin, str1);
    cout << "Enter the second string: ";
    getline(cin, str2);
    string str3 = str1;
    cout << "Copied string: " << str3 << endl;
    str3 += str2;
    cout << "Concatenated string: " <<  str3 << endl;
    if (str1 == str2)
    {
        cout << "The strings are equal." << endl;
    }
    else
    {
        cout << "The strings are not equal." << endl;
    }
    return 0;
}