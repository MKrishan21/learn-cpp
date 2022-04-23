// C++ Program to Check Whether a Number is Palindrome or Not

#include <iostream>
using namespace std;

int main()
{
    int n, reverse_number = 0;
    cout << "Enter the number you want to reverse :-";
    cin >> n;
    int temp = n;
    while (n != 0)
    {
        int reminder = n % 10;
        reverse_number = reverse_number * 10 + reminder;
        n = n / 10;
    }

    if (reverse_number == temp)

    {
        cout << reverse_number << " is a Palindrome number.";
    }
    else
    {
        cout << reverse_number << " is not a Palindrome number.";
    }
    return 0;
}