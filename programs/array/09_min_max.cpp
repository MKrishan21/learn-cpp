#include <iostream>
using namespace std;

int main()
{
    int marks[] = {32, 26, 63, 79, 77, 15, 53, 17};
    int n = sizeof(marks) / sizeof(marks[0]);
    // int a = marks[0];
    cout << "this is the max number in the array " << endl;
    for (int i = 0; i < n; i++)
    {
        if (marks[0] < marks[i])
            marks[0] = marks[i];
    }
    cout << marks[0] << endl;

    cout << "this is the min number in the array " << endl;

    for (int j = 0; j < n; j++)
    {
        if (marks[0] > marks[j])
            marks[0] = marks[j];
    }
    cout << marks[0] << endl;

    return 0;
}