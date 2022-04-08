// program to find the factorial of the given number

#include <iostream>
using namespace std;

int main()
{
    int fact = 1, number;
    int i = 1;
    cout << "Enter the number" << endl;
    cin >> number;
    // Find factorial using for loop
    // for (int i = 1; i <= number; i++)
    // {
    //     fact = i * fact;
    // }
    // Find factorial using while loop
    while (i <= number)
    {
        fact = fact * i;
        i++;
    }

    cout << "The factorial of " << number << " is  " << fact << endl;

    return 0;
}