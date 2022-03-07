#include <iostream>
using namespace std;

int main()
{
    int marks[] = {10, 11, 12, 13, 14, 15, 16, 17};
    //  size of array is
    cout << "size of array" << endl
         << sizeof(marks) << " bytes" << endl;
    // size of one element
    cout << "size of one element" << endl
         << sizeof(marks[0]) << " bytes" << endl;
    return 0;
}