// using break statement inside
// nested for loop

#include <iostream>
using namespace std;

int main()
{

    int sum = 0;

    // nested for loops

    // first loop
    for (int i = 1; i <= 9; i++)
    {
        // second loop
        for (int j = 1; j <= 9; j++)
        {
            if (i == 2)
            {
                break;
            }
            i++;
            j++;
            cout << "i = " << i << ", j = " << j << endl;
        }
    }

    return 0;
}