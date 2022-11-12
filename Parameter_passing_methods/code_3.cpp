// PASS BY REFERENCE OR CALL BY REFERENCE.
// This is only performed in C++.
#include <stdio.h>
#include <iostream>
using namespace std;
void swap(int &x, int &y) // formal parameters must be passed by address.
{
    int temp;
    temp = x; 
    x = y;
    y = temp; 
}
int main(int argc, char const *argv[])
{
    int a, b;
    a = 10;
    b = 20;
    swap(a,b); // Actual parameters
    printf("%d %d", a, b);
    return 0;
}



