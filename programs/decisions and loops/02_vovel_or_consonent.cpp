// C++ Program to Check Whether a character is Vowel or Consonant.

#include <iostream>
using namespace std;
int main()
{
    char c;
    cout << "Enter the character " << endl;
    cin >> c;
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
    {
        cout << "This is an vovel";
    }
    else
    {
        cout << "This is an consonant";
    }
    return 0;
}