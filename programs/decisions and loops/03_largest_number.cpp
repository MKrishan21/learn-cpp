// C++ Program to Find Largest Number Among Three Numbers

#include <iostream>
using namespace std;
int main()
{
    int a = 30, b = 43, c = 28;
    int max = a;
    if (a >= b && a >= c)
        cout << "This is largest number = " << a;
    if (b >= a && b >= c)
        cout << "This is largest number = " << b;
    if (c >= a && c >= b)
        cout << "This is largest number = " << c;
    return 0;
}