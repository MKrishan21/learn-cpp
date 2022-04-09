// programs to add only positive numbers

#include <iostream>
using namespace std;

int main()
{
    int sum;
    cout << "enter the value of i " << endl;
    cin >> sum;
    int n;
    cout << "enter the vaue of n ";
    cin >> n;
    for (int i = 0; i = n; i++)
    {
        if (n > 0)
        {
            sum = n + i;
        }
        if (n < 0)
        {
            break;
        }
    }
    cout << sum << endl;
    return 0;
}