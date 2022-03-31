#include <iostream>
using namespace std;

int main()
{
    int arr[] = {32, 26, 63, 79, 77, 15, 53, 17};
    int n = sizeof(arr) / sizeof(arr[0]);

    int max = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }

    cout << "Max element in array: " << max << endl;

    int min = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    cout << "Min element in array: " << min << endl;

    return 0;
}
