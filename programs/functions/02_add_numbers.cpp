// add two numbers

#include <iostream>
using namespace std;
int add(int a, int b, int c)
{
    return (a + b + c);
}
int main()
{
    int sum = add(90, 21, 4);
    cout << sum;
    return 0;
}