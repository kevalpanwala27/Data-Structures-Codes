#include <stdio.h>
#include <iostream>
using namespace std;


// IN C Language.


/*
struct Rectangle
{
    int length;
    int breadth;
};
void initialize(struct Rectangle *r, int l, int b)
{
    r->length=l;
    r->breadth=b;
}
int area(struct Rectangle r)
{
    return r.length * r.breadth;
}
void changeLength(struct Rectangle *r, int l)
{
    r->length = l;
}

int main(int argc, char const *argv[])
{
    struct Rectangle r;
    initialize(&r,10,5);
    area(r);
    changeLength(&r,50);   
    return 0;
}
*/




// IN C++ Language.

class Rectangle // We are including everything inside a class.// Properties + functions.
{
    public:
    int length;
    int breadth;

    void initialize(int l, int b)
    {
        length=l;
        breadth=b;
    }
    int area()
    {
        return length * breadth;
    }
    void changeLength(int l)
    {
        length = l;
    }
}; // DON'T MISS THIS SEMICOLON HERE...
int main(int argc, char const *argv[])
{
    Rectangle r; // This is object.
    r.initialize(10,5);
    int a = r.area();
    r.changeLength(50);   
    return 0;
}



