#include <stdio.h>
int main(int argc, char const *argv[])
{
    char A[]="class";
    char B[7];
    int i, j;
    for ( i = 0; A[i]!= '\0'; i++)
    {
        /* code */
    }
    i = i - 1;
    for ( j = 0; i >= 0 ; i--,j++)
    {
        B[j]=A[i];
    }
    B[j]='\0';
    for ( i = 0, j = 0; A[i]!='\0' && B[j]!='\0'; i++, j++)
    {
        if (A[i]==B[j])
        {
            printf("Palindrome");
            }else
        printf("Not palindrome");
        return 0;
    }
}



