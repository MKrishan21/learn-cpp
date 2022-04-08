// program to check the number entered by user is positive or negative

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n = ";
    cin >> n;
    if (n > 0)
    {
        cout << "you have entered a positive intiger : " << n << endl;
    }
    else if (n <= 0)
    {
        cout << "you have entered a negative number : " << n << endl;
    }
    cout << " Always executed.";
    return 0;
}