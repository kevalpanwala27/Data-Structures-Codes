#include <stdio.h>
#include <iostream>
using namespace std;
int sum(int n)
{
    if (n==0)
    {
        return 0;
    }else
    {
        return sum(n-1) + n;
    }
}
int main(int argc, char const *argv[])
{
    int r = sum(5);
    printf("%d ", r);
    return 0;
}


