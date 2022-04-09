//  program to find and print the last number of array....

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 11, 12, 13, 14, 15, 16, 17};
    // program to print length of array
    int n = sizeof(arr) / sizeof(arr[0]);
    // program to print Nth term
    cout << arr[n - 1] << endl;
    return 0;
}