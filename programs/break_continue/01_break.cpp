// basic program for break

#include <iostream>
using namespace std;

int main()
{

    for (int i = 0; i <= 5; i++)
    {
        if (i == 4)
        {
            break;
        }
        cout << i << endl;
    }

    return 0;
}