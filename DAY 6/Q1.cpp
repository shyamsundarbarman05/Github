#include <iostream>

using namespace std;

// Function to generate and print Pascal's Triangle in reverse
void reversePascalsTriangle(int numRows) {
    int arr[10][10]; // Assume the maximum number of rows is 10

    // Generate Pascal's Triangle
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i) {
                arr[i][j] = 1; // First and last values in each row are 1
            } else {
                arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j]; // Sum of two above
            }
        }
    }

    // Print Pascal's Triangle in reverse order
    for (int i = numRows - 1; i >= 0; i--) {
        for (int j = 0; j <= i; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int numRows;

    // Input the number of rows
    cout << "Enter the number of rows for Pascal's Triangle: ";
    cin >> numRows;

    // Function call to generate and print the reversed Pascal's Triangle
    reversePascalsTriangle(numRows);

    return 0;
}
