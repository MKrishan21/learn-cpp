#include <iostream>
using namespace std;

int main()
{
    int arr[] = {5, 54, 23, 56, 21, 25, 56};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Before reversing the array " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    for (int i = 0, j = size - 1; i < size / 2 && j >= size / 2; i++, j--)
    {
        swap(arr[i], arr[j]);
    }
    cout << "\n \nAfter reversing the array " << endl;
    for (int i = 0; i < size; i++)
    {

        cout << arr[i] << " ";
    }

    return 0;
}