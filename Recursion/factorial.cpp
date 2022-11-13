#include <stdio.h>
#include <iostream>
using namespace std;
int factorial(int n)
{
    if (n==0)
    {
        return 1;
    }else
    {
        return factorial(n-1) * n;
    }
}
int main(int argc, char const *argv[])
{
    int r = factorial(5);
    printf("%d ", r);
    return 0;
}
