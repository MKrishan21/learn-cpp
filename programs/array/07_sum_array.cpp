#include <iostream>
using namespace std;

int main()
{
    int marks[] = {10, 11, 12, 13, 14, 15, 16, 17};
    int n = sizeof(marks) / sizeof(marks[0]);
    int sum = 0;
    cout << n << endl;
    for (int i = 0; i < n; i++)
    {
        sum += marks[i];
    }
    cout << sum << endl;

    return 0;
}