// switch case program


#include <iostream>
using namespace std;

int main()
{
    char oper;
    float num1, num2;
    cout << "enter the operator " << endl;
    cin >> oper;
    cout << "enter number 1 & number 2" << endl;
    cin >> num1 >> num2;

    switch (oper)
    {
    case '+':
        cout << num1 << " + " << num2 << " = " << num1 + num2;
        break;
    case '-':
        cout << num1 << " - " << num2 << " = " << num1 - num2;
        break;
    case '*':
        cout << num1 << " * " << num2 << " = " << num1 * num2;
        break;
    case '/':
        cout << num1 << " / " << num2 << " = " << num1 / num2;
        break;
    default:
        cout << "please enter the valid operator ";
    }

    return 0;
}