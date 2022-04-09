// To check whether a character is vovel or consonant

#include <iostream>
using namespace std;

int main()
{
    char c;
    cout << "Enter the character : ";
    cin >> c;
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
    {
        cout << "It is a vovel " << endl;
    }

    else
    {
        cout << "It is a consonant";
    }
    return 0;
}