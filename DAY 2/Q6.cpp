#include <iostream>
using namespace std;

void stringCopy(char dest[], const char src[]) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

void stringConcat(char dest[], const char src[]) {
    int i = 0;
    while (dest[i] != '\0') {
        i++;
    }
    int j = 0;
    while (src[j] != '\0') {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
}

int stringCompare(const char str1[], const char str2[]) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return str1[i] - str2[i];
        }
        i++;
    }
    return str1[i] - str2[i];
}

int main() {
    char str1[100], str2[100], result[200];

    cout << "Enter the first string: ";
    cin.getline(str1, 100);

    cout << "Enter the second string: ";
    cin.getline(str2, 100);

    // Copy str1 to result
    stringCopy(result, str1);
    cout << "Copy of first string: " << result << endl;

    // Concatenate str1 and str2
    stringConcat(result, str2);
    cout << "Concatenated string: " << result << endl;

    // Compare str1 and str2
    int comparison = stringCompare(str1, str2);
    if (comparison == 0) {
        cout << "The strings are equal." << endl;
    } else if (comparison < 0) {
        cout << "The first string is less than the second string." << endl;
    } else {
        cout << "The first string is greater than the second string." << endl;
    }

    return 0;
}
