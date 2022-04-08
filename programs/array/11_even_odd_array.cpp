// program to find even and odd elements inside the element

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 11, 12, 13, 14, 15, 16, 17};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "even arr" << endl;
    for (int i = 0; i < n; i++)
    {

        if (arr[i] % 2 == 0)
            cout << arr[i] << endl;
    }
    cout << endl;
    cout << "odd" << endl;
    for (int j = 0; j < n; j++)
    {
        if (arr[j] % 2 != 0)
            cout << arr[j] << endl;
    }

    return 0;
}