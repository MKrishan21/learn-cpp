// find sum of natural numbers using recursion

#include <iostream>
using namespace std;
int add(int n);
int add(int n)
{
    if (n != 0)
    {
        return n + add(n + 1);
        return 0;
    }
}
int main()
{
    int n;
    cout << "Enter positive intiger ";
    cin >> n;
    cout << "sum = " << add(n);
    return 0;
}
