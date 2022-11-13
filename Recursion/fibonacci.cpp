#include <stdio.h>
#include <iostream>
using namespace std;
int fibonacci(int n)
{
    if (n<=1)
    {
        return n;
    }else
    {
        return fibonacci(n-2) + fibonacci(n-1);
    }
    
    
}
int main(int argc, char const *argv[])
{
    int r;
    r = fibonacci(10); // Fibonacci of 10 terms is 55.
    printf("%d ", r);
    return 0;
}

// This is an example of excessive recursion.
