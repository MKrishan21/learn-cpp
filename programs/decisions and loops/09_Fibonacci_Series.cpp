// C++ Program to Display Fibonacci Series

#include <iostream>
using namespace std;
int main()
{
    int n, t1 = 0, t2 = 1, nextTerm;
    cout << "Enter n :-";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        cout << nextTerm << " ";
    }

    return 0;
}