#include <iostream>
using namespace std;

int main()
{
    int marks[] = {10, 11, 22, 13, 77, 15, 16, 17};

    int no_of_elements = sizeof(marks) / sizeof(marks[0]);

    cout << "Enter the value of n for printing the nth element in the array." << endl;

    int n;

    cin >> n;

    if (no_of_elements < n)
    {
        cout << "Invalid input." << endl;
    }
    else if (n == 0 || n < 0)
    {
        cout << "Please enter a positive number greater than 0." << endl;
    }
    else
    {
        cout << n << "th element in array is " << marks[n - 1];
    }
    return 0;
}