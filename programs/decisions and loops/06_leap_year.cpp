// C++ Program to Check Leap Year

#include <iostream>
using namespace std;

int main()
{
    int year;
    cout << "Enter the days in year :- " << endl;
    cin >> year;
    if (year % 400 == 0)
    {
        cout << "It is an Leap year. " << endl;
    }
    else if (year % 100 == 0)
    {
        cout << "It is an ordinary year. " << endl;
    }

    else if (year % 4 == 0)
    {
        cout << "It is an Leap year.";
    }
    else
    {
        cout << "This is not a leap year.";
    }
    return 0;
}