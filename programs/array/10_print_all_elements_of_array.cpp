// program to print all numbers in array using for loop

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 11, 12, 13, 14, 15, 16, 17};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n - 1; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}