// TO Multiply each element of array by 2

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 11, 12, 13, 14, 15, 16, 17};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        arr[i] = arr[i] * 2;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }

    return 0;
}