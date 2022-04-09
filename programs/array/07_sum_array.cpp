/* program to find the sum of all elements inside the array*/

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 11, 12, 13, 14, 15, 16, 17};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;
    cout << n << endl;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    cout << sum << endl;

    return 0;
}