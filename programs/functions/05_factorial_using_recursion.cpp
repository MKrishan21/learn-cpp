#include <iostream>
using namespace std;

int fact(int n);
int fact(int n)
{
    if (n > 1)
    {
        return n * fact(n - 1);
        return 0;
    }
}
int main()
{
    int n;
    cout << "enter the positive integer = ";
    cin >> n;
    cout << "Factorial = " << fact(n);
    return 0;
}
