#include <iostream>
using namespace std;
int main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    int vowels = 0, consonants = 0;
    for (char c : str)
    {
        switch (tolower(c))
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            vowels++;
            break;
        default:
            consonants++;
        }
    }
    cout << "Number of vowels: " << vowels << endl;
    cout << "Number of consonants: " << consonants << endl;
    return 0;
}