// program to add 10 random numbers given by user

#include <iostream>
using namespace std;

int main()
{
    int num, sum = 0;

    for (int i = 1; i <= 10; i++)
    {
        cout << "enter numbers "
             << i << " - ";
        cin >> num;
        sum += num;
    }
    cout << "the sum of numbers are " << sum << endl;

    return 0;
}