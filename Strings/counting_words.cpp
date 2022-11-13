#include <stdio.h>
int main(int argc, char const *argv[])
{
    char S[]="How are you";
    int i, word = 1;
    for ( i = 0; S[i]!='\0'; i++)
    {
        if (S[i]==' ' && S[i-1]!=' ')
        {
            word++;
        }
        
    }
    printf("%d", word);
    
    return 0;
}


