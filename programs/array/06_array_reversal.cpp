#include <iostream>
using namespace std;

int main()
{
    int marks[] = {10, 11, 12, 13, 14, 15, 16, 17};
    int n = sizeof(marks) / sizeof(marks[0]);
    for (int i = n; i > 0; i--)
    {
        cout << marks[i] << endl;
    }

    return 0;
}