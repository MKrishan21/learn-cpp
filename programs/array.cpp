#include <iostream>
using namespace std;

int main()
{
    int marks[] = {10, 11, 12, 13, 14, 15, 16, 17};
    // program to print length of array
    int n = sizeof(marks) / sizeof(marks[0]);
    // program to print Nth term
    cout << n << endl;
    // program top print last number of array
    cout << marks[n - 1] << endl;
    // program to print all numbers in array using for loop
    for (int i = 0; i < 8; i++)
    {
        cout << "this is the total numbers of marks " << marks[i] << endl;
    }
    //  size of array is
    cout << sizeof(marks[n]);
    return 0;
}