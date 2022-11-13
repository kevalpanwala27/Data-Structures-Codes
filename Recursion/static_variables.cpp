#include <stdio.h>
#include <iostream>
using namespace std;
int fun (int n) 
{
    static int x = 0; // static variables in recursion.
    if(n>0) 
    {
        x++;
        return fun(n-1) + x;
    } 
    return 0;
} 
int main(int argc, char const *argv[])
{
    int a;
    a = fun(5);
    printf("%d\n", a);
    return 0;
}

