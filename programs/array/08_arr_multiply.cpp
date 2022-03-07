#include <iostream>
using namespace std;

int main()
{
    int marks[] = {10, 11, 12, 13, 14, 15, 16, 17};
    int n = sizeof(marks) / sizeof(marks[0]);
    int multi = 1;
    cout << n << endl;
    for (int i = 0; i < n; i++)
    {
        multi = multi * marks[i];
    }
    cout << multi << endl;

    return 0;
}