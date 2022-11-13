#include <stdio.h>
int Valid(char name[])
{
    int i;
    for ( i = 0; name[i]!='\0'; i++)
    {
        if (!(name[i]>=65 && name[i]<=90) && !(name[i]>=97 && name[i]<=122) && !(name[i]>=48 && name[i]<=57))
        {
            return 0;
        }
        
    }
    return 1;
    
}
int main(int argc, char const *argv[])
{
   char name[] = "Ani?123";
   if (Valid (name))
   {
       printf("Valid string");
   }else {
        printf("Not Valid String");   
   }
   return 0;
}




