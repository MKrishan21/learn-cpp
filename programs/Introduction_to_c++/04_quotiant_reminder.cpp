// C++ Program to Find Quotient and Remainder

#include <iostream>
using namespace std;
int main()
{
    int divisor, dividend, quotiant, reminder;
    cout << "enter divisor ";
    cin >> divisor;
    cout << "enter dividend ";
    cin >> dividend;
    quotiant = dividend / divisor;
    reminder = dividend % divisor;
    cout << "The quotiant is = " << quotiant << endl;
    cout << "The reminder is = " << reminder << endl;

    return 0;
}