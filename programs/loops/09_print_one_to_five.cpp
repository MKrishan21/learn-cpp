// program to print only 5 elements in array

#include <iostream>
using namespace std;

int main()
{
    // To print first five numbers in array
    int i = 0;
    int marks[] = {11, 12, 13, 14, 15, 16, 21, 36, 5};
    int n = sizeof(marks) / sizeof(marks[0]);
    for (int i = 0; i <= 5; i++)
    {
        cout << marks[i] << endl;
    }

    return 0;
}