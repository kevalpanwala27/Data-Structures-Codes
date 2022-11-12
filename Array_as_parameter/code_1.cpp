#include <stdio.h>
#include <iostream>
using namespace std;
void fun(int A[], int n) // Array is passed as parameter in formal parameters.
{
    for (int i = 0; i < n; i++)
    {
        printf("%d", A[i]);
    }
}

int main(int argc, char const *argv[])
{
    int A[5] = {2,4,6,8,10};
    fun(A,5);
    return 0;
}
// Arrays are always passed by address.
// Arrays can never be passed by value.
// We cannot use foreach loop when array is passed as address in parameter.