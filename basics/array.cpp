#include <iostream>
using namespace std;

int main()
{
   int  i = 0;
    int marks[8] = {10, 11, 12, 13, 14, 15, 16, 17};
    // program to print length of array
    int n = sizeof(marks) / sizeof(marks[0]);
    //  size of array
    cout << sizeof(marks) << endl;
    // address of marks
    int *a = &marks[8];
    cout << a << endl;
    return 0;
}