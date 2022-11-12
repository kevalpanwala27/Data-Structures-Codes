// Pointers are used to store the address of data, Not data itself.
// Pointers are address variables.
// Pointers are used for indirect accessing the data.

#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    int a = 10; // data variable
    int *p; // Address variable // Declaration 
    p = &a; // Initialization // &a is called address of a.
    // int *p = &a; // Declaration + Initialization we cannot do it together.
    printf("%d\n", a); // Printing the value.
    printf("%d\n", *p); // *p is called as dereferencing, 
    // and printing the value of that address. // Printing p means only address.
}


