#include <iostream>
using namespace std;
int main()
{

    int a = 21, b = 11, c, d, temp;
    c = a + b;
    d = a * b;
    cout << " For swapping"
    temp = a;
    a = b;
    b = c;
    c = d;
    d = temp;
    cout << "after swaping " << endl
         << a << endl
         << b << endl
         << c << endl
         << d;
    return 0;
}