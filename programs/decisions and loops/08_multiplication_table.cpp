#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cout << " Enter the number for multiplication :- " << endl;
    cin >> n;
    cout << "Enter the number upto multiplication :-";
    cin >> m;
    for (int i = 1; i <= m; i++)
    {
        cout << n << " * " << i << " = " << i * n << endl;
    }

    return 0;
}