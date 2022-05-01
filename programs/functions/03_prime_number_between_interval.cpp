#include <iostream>
using namespace std;
bool isprime(int num)
{
    for (int i = 2; i < num; i++)
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
    int num = 100;
    for (int i = 2; i < num; i++)
    {
        if (isprime(i))
        {
            cout << i << " ";
        }
    }

    return 0;
}