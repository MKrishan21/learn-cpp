// program to find the length of array

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 11, 12, 13, 14, 15, 16, 17};
    // program to print length of array
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "the length of the array" n << endl;
    return 0;
}