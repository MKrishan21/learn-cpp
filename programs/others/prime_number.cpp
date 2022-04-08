/* ....program to check weather the number given by
the user is prime or not.....*/

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
    cout << "enter the number " << endl;
    cin >> num;
    bool numberIsPrime = isPrime(num);
    if (numberIsPrime)
    {
        cout << "this is a Prime Number ";
    }
    else
    {
        cout << " This is not a Prime Number ";
    }
    return 0;
}
// 5
// 2, 3, 4

//     10 2

//     11 2,
//     3, 4, 5, 6, 7, 8, 9, 10