// C++ Program to Display Prime Numbers Between Two Intervals 5 and 71

#include <iostream>
using namespace std;

bool is_prime(int num)
{
    for (int i = 2; i < num - 1; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n = 70;
    for (int i = 5; i <= 70; i++)
    {
        if (is_prime(i))
        {
            cout << i << " , ";
        }
    }

    return 0;
}