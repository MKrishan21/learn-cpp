// To find the largest number among 3 numbers
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {23, 42, 54};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        if (arr[0] < arr[i])
            arr[0] = arr[i];
    }
    cout << arr[0] << endl;

    return 0;
}