#include <iostream>
using namespace std;

int main()
{
    int result = 0, reminder, num, originalnumber;
    cout << "Enter number : ";
    cin >> num;
    originalnumber = num;
    while (originalnumber != 0)
    {
        reminder = originalnumber % 10;
        result += reminder * reminder * reminder;
        originalnumber /= 10;
    }
    if (result == num)
    {
        cout << num << " is an Armstrong number.";
    }
    else
    {
        cout << num << " is not an Armstrong number.";
    }
    return 0;
}