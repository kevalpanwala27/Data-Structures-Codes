// ERRORS ARE THERE IN CODE....

#include <stdio.h>
#include <iostream>
using namespace std;
struct Stack
{
    int size;
    char *s;
    int top;
};

// CREATING A STACK...

void create(struct Stack *st)
{
    printf("Enter size of an array\n");
    scanf("%d ", &st->size);
    
    st->s = new char[st->size]; // Allocating memory in heap using C++ language.
    st->top = -1;
}

// DISPLAYING OF STACK...

void display(struct Stack *st)
{
    int i;
    for(i=st->top; i>=0; i--) {
        printf("%d ", st->s[i]);
    }
    printf("\n");
}


// INSERTING ELEMENT IN STACK...

void push(struct Stack *st, char x)
{
    if(st->top == st->size - 1) {
        printf("Stack Overflow");
    } else {
        st->top++;
        st->s[st->top]=x;
    }
}






// DELETING ELEMENT IN STACK...

char pop(struct Stack *st)  
{
    char x = -1;
    
    if(st->top == -1) {
        printf("Stack Underflow");
    } else {
        x = st->s[st->top];
        st->top--;
    }
    
    return x;
}





int isBalance(char * exp)
{
    int i;
    for ( i = 0; exp[i]!='\0'; i++)
    {
        if (exp[i]=='(')
        {
            push(exp[i]);
        } else if (exp[i]==')')
        {
            if (top == NULL)
            {
                return 0;
                pop();
            }
               
        }
        
    }
    if (top == NULL)
    {
        return 1;
    } else
    {
        return 0;
    }
    
    
    
}




int main(int argc, char const *argv[])
{
    struct Stack st;
    char *exp = "((a+b)*(c-d))";
    printf("%d\n", isBalance(exp));
    return 0;
}
