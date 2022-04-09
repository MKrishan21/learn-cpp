/* program to multiply all the elements inside the array*/

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 11, 12, 13, 14, 15, 16, 17};
    int n = sizeof(arr) / sizeof(arr[0]);
    int multi = 1;
    for (int i = 0; i < n; i++)
    {
        multi = multi * arr[i];
    }
    cout << multi << endl;

    return 0;
}