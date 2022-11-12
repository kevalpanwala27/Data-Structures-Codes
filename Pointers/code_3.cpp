// POINTER TO AN ARRAY.
#include <stdio.h>
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int A[5]={2,4,6,8,10};
    int *p;
    p = A; // As we are doing with the array. REMEMBER THIS !!!

    // Printing of an array
    for (int i = 0; i < 5; i++)
    {
        cout << A[i] << endl;
    }
    std::cout << "" << std::endl;
    for (int i = 0; i < 5; i++)
    {
        cout << p[i] << endl; // only p will print array this time. Don't use (*) here. 
    }
    return 0;
}


