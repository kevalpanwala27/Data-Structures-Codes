#include <stdio.h>
int main(int argc, char const *argv[])
{
    char A[]="python";
    char B[7];
    int i, j;
    for ( i = 0; A[i]!= '\0'; i++) // This is done so we reach to last null character.
    {
        /* code */
    }
    i = i - 1; // This thing will copy the code.
    for ( j = 0; i >= 0 ; i--,j++) // This is done for printing the reverse copy char array.
    {
        B[j]=A[i];
    }
    B[j]='\0';
    printf("%s", B);
    return 0;
}


