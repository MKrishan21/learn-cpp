#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a, b, c, x1, x2, discriminant, x3, x4;
    cout << "enter the coefficients a b & c ";
    cin >> a >> b >> c;
    discriminant = b * b - 4 * a * c;
    if (discriminant > 0)
    {
        x1 = (-b + sqrt(discriminant)) / (2 * a);
        x2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Roots are real and different. " << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    else if (discriminant == 0)
    {
        cout << "Roots are real & same. ";
        x1 = -b / (2 * a);
        cout << "x1 = x2 i.e " << x1 << endl;
    }
    else
    {
        x3 = -b / (2 * a);
        x4 = sqrt(-discriminant) / (2 * a);
        cout << "Roots are complex & different. ";
        cout << "x1 = " << x3 << "+" << x4 << "i" << endl;
        cout << "x2 = " << x3 << "-" << x4 << "i" << endl;
    }
    return 0;
}