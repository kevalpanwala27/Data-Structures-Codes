#include <stdio.h>
#include <iostream>
using namespace std;
void fun(int n)
{
    if (n>0)
    {
        printf("%d\n", n);
        fun(n-1);
        fun(n-1);
    }
    
}
int main(int argc, char const *argv[])
{
    int x = 3;
    fun(x);   
    return 0;
}
// If a recursive function calling itself more than one time then it is known as Tree Recursion.
