#include <stdio.h>
#include <iostream>
using namespace std;
void fun(int n)
{
    if (n>0)
    {
        fun(n-1);
        printf("%d \n", n);  
    }
    
}
int main(int argc, char const *argv[])
{
    int x=3;
    fun(x);
    return 0;
}
// Here printing is done at returning time.
// Here ascending order is seen.