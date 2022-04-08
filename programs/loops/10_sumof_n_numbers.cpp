// program to calculate sum of 5 elements in array

#include <iostream>
using namespace std;

int main()
{
    // To print sum of first n(5) natural numbers
    int arr[] = {10, 32, 31, 54, 45, 76, 43, 27, 58};
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += arr[i];
    }
    cout << sum << endl;

    return 0;
}