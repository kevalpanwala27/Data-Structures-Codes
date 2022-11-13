#include <stdio.h>
int main(int argc, char const *argv[])
{
    char S[]="weLCoMe";
    int i;
    for ( i = 0; S[i]!='\0'; i++)
    {
        if (S[i]>=65 && S[i]<90) // in uppercase so it is converting to lowercase.
        {
            S[i]+=32;
        }else if (S[i]>=97 && S[i]<=122) // in lowercase so it is converting to uppercase.
        {
            S[i]-=32;
        }
        
    }
    printf("%s", S);
    return 0;
}
