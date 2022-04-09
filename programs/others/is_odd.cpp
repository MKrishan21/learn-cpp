// programs to find odd numbers between 1 to 100



#include <iostream>
using namespace std;

bool isodd(int num)
{
    for (int i = 0; i <= 100; i++)
    {

        if (num % 2 != 0)
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

        if (isodd(i))
        {
            cout << i << "  ";
        }
    }
    return 0;
}
