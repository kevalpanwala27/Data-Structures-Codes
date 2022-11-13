#include <stdio.h>
#include <iostream>
using namespace std;
int fun(int n)
{
    if (n>100)
        return (n-10);
    return fun(fun(n+11));   
}
int main(int argc, char const *argv[])
{
    int x;
    x=fun(95);
    printf("%d\n", x);
    return 0;
}

// In nested recursion, recursive function will pass parameter as recursive call.

