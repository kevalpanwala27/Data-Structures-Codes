// ALLOCATING ARRAY MEMORY IN HEAP USING POINTER.

#include <stdio.h>
#include <iostream>
using namespace std;
int * fun(int n)
{
    int *p;
    p = (int *)malloc(n*sizeof(n));
    return p;
}
int main(int argc, char const *argv[])
{
    int *A;
    A = fun(5);   
    return 0;
}
// Arrays are always passed by address.

