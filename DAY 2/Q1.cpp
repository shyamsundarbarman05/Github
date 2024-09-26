#include <iostream>
#include <vector>
using namespace std;
// Function to generate Pascal's triangle
vector<vector<int>> generatePascalsTriangle(int numRows)
{
    vector<vector<int>> triangle(numRows);
    for (int i = 0; i < numRows; ++i)
    {
        triangle[i].resize(i + 1);
        triangle[i][0] = triangle[i][i] = 1;
        for (int j = 1; j <= i; ++j)
        {
            triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
        }
    }
    // Initialize each element of the triangle vector to 0
    for (int i = 0; i < numRows; ++i)
    {
        for (int j = 0; j <= i; ++j)
        {
            triangle[i][j] = 0;
        }
    }
    return triangle;
}
// Function to print Pascal's triangle in reverse order
void printReversedPascalsTriangle(const vector<vector<int>> &triangle)
{
    for (int i = triangle.size() - 1; i >= 0; --i)
    {
        for (int j = 0; j < triangle[i].size(); ++j)
        {
            cout << triangle[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int numRows;
    cout << "Enter the number of rows for Pascal's triangle: ";
    cin >> numRows;
    vector<vector<int>> triangle = generatePascalsTriangle(numRows);
    printReversedPascalsTriangle(triangle);
    return 0;
}