// PASS BY VALUE OR CALL BY VALUE.
#include <stdio.h>
#include <iostream>
using namespace std;
void swap(int x, int y) // formal parameters 
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
    swap(a,b); // actual parameters.
    printf("%d %d", a, b);
    return 0;
}
// Actual Parameters will not be modified if any changes are performed in the Formal Parameters.
// In Pass by value any changes done to formal parameters will not affect the actual parameters.

