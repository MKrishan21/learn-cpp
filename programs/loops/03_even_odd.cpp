// program to check weather the number is even or odd

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n = ";
    cin >> n;

    if (n % 2 == 0)
    {
        cout << "This is an even number ";
    }
    else if (n % 2 != 0)
    {
        cout << "This is an odd number " << endl;
    }

    return 0;
}