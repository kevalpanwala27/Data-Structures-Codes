#include <stdio.h>
#include <iostream>
int main(int argc, char const *argv[])
{
    int A[3][4]={{1,2,3,4},{2,4,6,8},{1,3,5,7}}; // This 2D array will be created in stack. // declaration + initialization.

    int *B[3]; // Declaration of rows is in the stack. But arrays are located in the heap using malloc.
    int **C; // Everything is in heap. // That is entire structure is in heap.

    B[0]=(int *)malloc(4*sizeof(int)); // allocating arrays in heap.
    B[1]=(int *)malloc(4*sizeof(int));
    B[2]=(int *)malloc(4*sizeof(int));

    C=(int **)malloc(3*sizeof(int)); // Declaration of rows is in the heap.
    C[0]=(int *)malloc(4*sizeof(int)); // allocating arrays in heap.
    C[0]=(int *)malloc(4*sizeof(int));
    C[0]=(int *)malloc(4*sizeof(int));

    // Printing elements of an array A.

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
        
    }

    // Printing elements of an array B.

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", B[i][j]);
        }
        printf("\n");
        
    }

    // Printing elements of an array C.

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
        
    }
    return 0;
}



