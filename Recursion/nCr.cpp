#include <stdio.h>
#include <iostream>
using namespace std;
int nCr(int n, int r)
{
    if (r==0 || n==r)
    {
        return 1;
    } else
    {
        return nCr(n-1,r-1) + nCr(n-1,r);
    }
    
    
}
int main(int argc, char const *argv[])
{
    int x;
    x = nCr(5,1);
    printf("%d ", x);
    return 0;
}


