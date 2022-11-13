#include <stdio.h>
int main(int argc, char const *argv[])
{
    // Ways for declaration and initialization.

    int A[5]; // only declaration.
    int B[5]={2,4,5,7,8}; // Declaration + initialization. 
    int C[10]={2,4};
    int D[5]={0};
    int E[]={1,2,3,4,5,6,7,8,9};

    // Printing of an array is done by using of for loop.

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", B[i]);
    }

    return 0;
}




