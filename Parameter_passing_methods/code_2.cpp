// PASS BY ADDRESS OR CALL BY ADDRESS.
#include <stdio.h>
#include <iostream>
using namespace std;
void swap(int *x, int *y) // formal parameters must be pointers.
{
    int temp;
    temp = *x; // Dereferencing we have to use here for accessing the data of the actual parameters.
    *x = *y; // Dereferencing we have to use here for accessing the data of the actual parameters.
    *y = temp; // Dereferencing we have to use here for accessing the data of the actual parameters.
}
int main(int argc, char const *argv[])
{
    int a, b;
    a = 10;
    b = 20;
    swap(&a,&b); // actual parameters must be passed  by address.
    printf("%d %d", a, b);
    return 0;
}
// Call by address uses pointers.



