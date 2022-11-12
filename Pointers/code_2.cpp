// HOW TO ACCESS HEAP MEMORY USING POINTER !!!
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    int *p;
    p = (int *)malloc(5*sizeof(int)); // In C lang.
    p = new int[5]; // In C++ lang.
    return 0;
}
// To allocate heap memory using pointer in C lang, we use malloc function. // <stdlib.h> we hae to write this.

