#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int power;
    float base, result = 1;
    cout << "enter Base and power" << endl;
    cin >> base >> power;
    // result = pow(base, power);
    // cout << result << endl;
    while (power != 0)
    {
        result = result * base;
        --power;
    }
    cout << base << " ^ " << power << " = " << result;
    return 0;
}