#include <iostream>
using namespace std;

// & -> Address of (Ampersand)
// * -> Value at
// *&arr[i] and arr[i] are same

int main()
{
    int arr[] = {10, 11, 22, 13, 77, 15, 16, 17};

    int no_of_elements = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < no_of_elements; i++)
    {
        cout << "Element: " << arr[i] << " Address: " << &arr[i] << endl;
    }

    return 0;
}