#include <stdio.h>
#include <iostream>
using namespace std;
struct Rectangle
{
    int length;
    int breadth;
};
int area(struct Rectangle r1)
{
    return r1.length * r1.breadth; 
}
int main(int argc, char const *argv[])
{
    struct Rectangle r = {10,5};
    printf("%d\n", area(r));   
    return 0;
}
// It is passed as call by value.
// Here formal parameters will not affect actual parameters.



