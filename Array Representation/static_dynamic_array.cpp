#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int A[5] = {2,4,6,8,10}; // Only this will be created in stack. // Hence it is called as static array.

    // Creating array in heap. // Hence it is called as dynamic array.
    
    int *p;
    p = (int *)malloc(5*sizeof(int)); // This is done in C lang. // This malloc function will allocate memory in heap.
    p = new int[5]; // This is done in C++ lang.
    p[0]=3; p[1]=5; p[2]=7; p[3]=9; p[4]=11;

    // Printing Array A which is in stack memory.

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", A[i]);
    }

    printf("\n");

    // Printing Array p which is in Heap memory.

    for (int i = 0; i < 5 ;i++)
    {
        printf("%d ", p[i]);
    }
    
    
    return 0;
}


