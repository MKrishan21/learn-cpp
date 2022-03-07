#include <iostream>
using namespace std;

int main()
{
    int marks[] = {10, 11, 12, 13, 14, 15, 16, 17};
    // program to print length of array
    int n = sizeof(marks) / sizeof(marks[0]);
    // program to print Nth term
    cout << marks[n - 1] << endl;
    return 0;
}