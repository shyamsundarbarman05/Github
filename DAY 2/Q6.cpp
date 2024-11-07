#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str1[100], str2[100], result[200];

    cout << "Enter the first string: ";
    cin.getline(str1, 100);

    cout << "Enter the second string: ";
    cin.getline(str2, 100);

    // Copy str1 to result
    strcpy(result, str1);
    cout << "Copy of first string: " << result << endl;

    // Concatenate str1 and str2
    strcat(result, str2);
    cout << "Concatenated string: " << result << endl;

    // Compare str1 and str2
    int comparison = strcmp(str1, str2);
    if (comparison == 0) {
        cout << "The strings are equal." << endl;
    } else if (comparison < 0) {
        cout << "The first string is less than the second string." << endl;
    } else {
        cout << "The first string is greater than the second string." << endl;
    }

    return 0;
}
