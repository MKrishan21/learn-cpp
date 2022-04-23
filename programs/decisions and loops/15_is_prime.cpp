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
    int num;
    cout << "Enter the number " << endl;
    cin >> num;
    if (isPrime(num))
    {
        cout << "It is a prime number ";
    }
    else
    {
        cout << " This is not a prime number";
    }

    return 0;
}