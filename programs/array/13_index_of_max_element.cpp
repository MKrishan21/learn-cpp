#include <iostream>
using namespace std;

int main()
{
    int arr[] = {45, 65, 56, 85, 32, 82, 21};
    int elements = sizeof(arr) / sizeof(arr[0]);
    int max = arr[0];
    int pos = 0;
    for (int i = 1; i < elements; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
            pos = i;
        }
    }
    cout << "The maximum number in elemeent is " << max << " and it is on  " << pos << " position " << endl;

    return 0;
}