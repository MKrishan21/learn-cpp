#include <iostream>
using namespace std;

int main()
{
    int marks[] = {10, 11, 22, 13, 77, 15, 16, 17};
    int *a = marks;
    cout << *a << endl;
    cout << *a++ << endl;

    cout << "the value of *a is " << *a << endl;
    cout << "the value of (*a + 1) is " << *(a + 1) << endl;
    cout << "the value of (*a + 2) is " << *(a + 2) << endl;
    cout << "the value of (*a + 3) is " << *(a + 3) << endl;
    cout << "the value of (*a + 4) is " << *(a + 4) << endl;
    cout << "the value of (*a + 5) is " << *(a + 5) << endl;
    cout << &a << endl;
    cout << &*(a + 1) << endl;
    cout << &*(a + 2) << endl;
    cout << &*(a + 3) << endl;
    cout << &*(a + 4) << endl;
    cout << &*(a + 5) << endl;
    cout << &*(a + 6) << endl;
    cout << &*(a + 8) << endl;
    cout << &*(a + 9) << endl;

    
    return 0;
}