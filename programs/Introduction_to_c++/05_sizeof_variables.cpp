// C++ Program to Find Size of int, float, double and char in Your System

#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    float b = 2.1;
    bool c = true;
    double d = -21.22;
    char e;
    cout << "Size of int is - " << sizeof(int) << endl
         << "Size of float is - " << sizeof(float) << endl
         << "Size of double is - " << sizeof(double) << endl
         << "Size of char is - " << sizeof(char);
    return 0;
}