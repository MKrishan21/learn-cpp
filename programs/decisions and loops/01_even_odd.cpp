// C++ Program to Check Whether Number is Even or Odd

#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter the number " << endl;
    cin >> number;
    if (number % 2 == 0)
    {
        cout << "This is an even number. " << endl;
    }
    else
    {
        cout << "The number you have enteres is odd.";
    }
    return 0;
}