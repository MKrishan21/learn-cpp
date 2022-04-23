// C++ Program to Calculate Sum of Natural Numbers

#include <iostream>
using namespace std;

int main()
{
    int num, sum = 0;
    cout << "Enter total natural numbers " << endl;
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        sum = i + sum;
    }
    cout << "The sum of " << num << " natural numbers will be = " << sum;
    return 0;
}