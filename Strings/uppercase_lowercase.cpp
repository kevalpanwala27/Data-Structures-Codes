#include <stdio.h>
int main(int argc, char const *argv[])
{
    char S[]="WELCOME";
    int i;
    for ( i = 0; S[i]!='\0'; i++)
    {
        S[i]=S[i]+32;
    }
    printf("%s", S);
    
    return 0;
}

