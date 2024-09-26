#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char str[100];
    bool isPalindrome = true;
    cout << "Enter a string: ";
    cin >> str;
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++)
    {
        if (str[i] != str[length - 1 - i])
        {
            isPalindrome = false;
            break;
        }
    }
    if (isPalindrome)
    {
        cout << "The string " << str << " is a palindrome." << endl;
    }
    else
    {
        cout << "The string " << str << " is not a palindrome." << endl;
    }
    return 0;
}
