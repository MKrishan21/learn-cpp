/*  program to find the size of array and
single element*/

#include <iostream>
using namespace std;

int main()
{
     int arr[] = {10, 11, 12, 13, 14, 15, 16, 17};
     //  size of array is
     cout << "size of array" << endl
          << sizeof(arr) << " bytes" << endl;
     // size of one element
     cout << "size of one element" << endl
          << sizeof(arr[0]) << " bytes" << endl;
     return 0;
}