// programs to find numbers that are divisible by 10


#include <iostream>
using namespace std;

bool is_divisible_by_ten(int num)
{
    for (int i = 0; i <= 100; i++)
    {

        if (num % 10 == 0)
        {
            return true;
        }
    }

    return false;
}

int main()
{

    for (int i = 0; i <= 100; i++)
    {

        if (is_divisible_by_ten(i))
        {
            cout << i << "  ";
        }
    }
    return 0;
}
