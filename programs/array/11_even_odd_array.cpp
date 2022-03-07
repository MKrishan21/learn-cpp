#include <iostream>
using namespace std;

int main()
{
    int marks[] = {10, 11, 12, 13, 14, 15, 16, 17};
    int n = sizeof(marks) / sizeof(marks[0]);
    cout << "even marks" << endl;
    for (int i = 0; i < n; i++)
    {

        if (marks[i] % 2 == 0)
            cout << marks[i] << endl;
    }
    cout << endl;
    cout << "odd" << endl;
    for (int j = 0; j < n; j++)
    {
        if (marks[j] % 2 != 0)
            cout << marks[j] << endl;
    }

    return 0;
}