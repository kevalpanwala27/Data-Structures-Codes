// LIFO - last in first out. is the principal used by stack.



#include <stdio.h>
#include <iostream>
using namespace std;

struct Stack
{
    int size;
    int top;
    int *s;
};






// CREATING A STACK...

void create(struct Stack *st)
{
    printf("Enter size of an array\n");
    scanf("%d ", &st->size);
    
    st->s = new int[st->size]; // Allocating memory in heap using C++ language.
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

void push(struct Stack *st, int x)
{
    if(st->top == st->size - 1) {
        printf("Stack Overflow");
    } else {
        st->top++;
        st->s[st->top]=x;
    }
}









// DELETING ELEMENT IN STACK...

int pop(struct Stack *st)  
{
    int x = -1;
    
    if(st->top == -1) {
        printf("Stack Underflow");
    } else {
        x = st->s[st->top];
        st->top--;
    }
    
    return x;
}







// PEEKING ELEMENT IN STACK...
// Index = top - position + 1 ---> this is formula for pop an element in stack.

int peek(struct Stack *st, int position)
{
    int x = -1;
    
    if(st->top - position +1 < 0) {
        printf("Invalid Position");
    } else {
        x = st->s[st->top - position +1];
    }
    
    return x;
}







// STACK-TOP ELEMENT IN STACK...

int stackTop(struct Stack *st)
{
    if(st->top == -1) {
        return -1;
    } else {
        return st->s[st->top];
    }
}








// isEMPTY STACK...

int isEmpty(struct Stack *st)
{
    if(st->top == -1) {
        return 1;
    } else {
        return 0;
    }
}








// isFULL STACK...

int isFull(struct Stack *st)
{
    if(st->top == st->size-1)
    {
        return 1;
    } else {
        return 0;
    }
}









// MAIN FUNCTION...


int main()
{
    struct Stack st;
    create(&st);
    
    
    push(&st, 5);
    push(&st, 10);
    push(&st, 15);
    push(&st, 20);
    push(&st, 25);
    
    // printf("%d \n", pop(&st));
    // printf("%d \n", peek(&st, 3));
    // printf("%d \n", stackTop(&st));
    // printf("%d \n", isEmpty(&st));
    // printf("%d \n", isFull(&st));
    
    display(&st);
    return 0;
}


// isEmpty condition when if(top==-1).
// isFull condition when if(top==size-1).









