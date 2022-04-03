#include <iostream>
using namespace std;

bool isPrime(int num)
{
    for (int i = 2; i <= num - 1; i++)
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

    for (int i = 2; i <= 1000; i++)
    {

        if (isPrime(i))
        {
            cout << i << endl;
        }
    }
    return 0;
}
