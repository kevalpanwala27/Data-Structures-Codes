#include <stdint.h>
#include <iostream>
using namespace std;
int power(int m, int n)
{
    if (n==0)
    {
        return 1;
    }else
    {
        return power(m,n-1) * m;
    }
    
    
}
int main(int argc, char const *argv[])
{
    int x = power(5,2); // 5^2 = 25
    printf("%d ", x);   
    return 0;
}
