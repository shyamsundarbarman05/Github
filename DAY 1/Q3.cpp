#include <iostream>
using namespace std;
int main()
{
    int arr[] = {3, 2, 5, 4, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    bool swapped;
    for (int i = 0; i < n - 1; i++)
    {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped)
            break; // Array is sorted
    }
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}