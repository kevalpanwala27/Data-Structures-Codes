// IMPORTANT CODE, REMEMBER IT !!!

#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int *p, *q;
    p = (int *)malloc(5*sizeof(int)); // Allocating pointer p memory in heap. // Size is taken as 5(sizeof()).
    p[0]=3; p[1]=5; p[2]=7; p[3]=9; p[4]=11;

    q = (int *)malloc(10*sizeof(int)); // Allocating pointer q memory in heap. // Size id taken as 10(sizeof()).

    // Coping pointer p element in pointer q.
    for (int i = 0; i < 5; i++)
    {
        q[i]=p[i];
    }

    free(p); // Means removing members in pointer p;
    p=q; // Coping address. // That is address of p is given to q.
    q=NULL; // Separating p and q.

    // Printing element q. with the increased array size.
    for (int i = 0; i < 5; i++)
    {
        printf("%d \n", q[i]);
    }
   
    return 0;
}




