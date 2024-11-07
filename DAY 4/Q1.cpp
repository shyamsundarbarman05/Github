#include <iostream>
using namespace std;

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int nCr(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

void printReversePascalsTriangle(int rows) {
    for (int i = rows - 1; i >= 0; i--) {
        for (int j = 0; j <= i; j++) {
            cout << nCr(i, j) << " ";
        }
        cout << endl;
    }
}

int main() {
    int rows;

    cout << "Enter the number of rows for Pascal's Triangle: ";
    cin >> rows;

    printReversePascalsTriangle(rows);

    return 0;
}
