// program of multiplication of the given number upto certian value

#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << ":Enter the number ";
    cin >> number;
    int n;
    cout << "Enter the value of n ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << number << " * " << i << " = " << number * i << endl;
    }

    return 0;
}