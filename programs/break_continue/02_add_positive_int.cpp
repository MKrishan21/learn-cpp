/* program to add positive numbers only
if the number not positive break*/

#include <iostream>

using namespace std;

int main()

{

    int n;

    int sum = 0;

    while (true)
    {
        cout << "enter the valuie of n  ";
        cin >> n;
        if (n <= 0)
        {
            break;
        }
        sum += n;
    }
    cout << sum << endl;

    return 0;
}
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 0;
//     int sum = 0;

//     do
//     {
//         sum += n;
//         cout << "enter the value of n" << endl;
//         cin >> n;
//     } while (n > 0);

//     cout << sum << endl;

//     return 0;
// }
