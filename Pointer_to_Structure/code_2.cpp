// ALLOCATING POINTER TO STRUCTURE MEMORY IN HEAP.

#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;
struct Square
{
    int length;
    int breadth;
};

int main()
{
    struct Square *p; // Pointer to structure
    p = (struct Square *)malloc(sizeof(struct Square)); // In C lang.
    p = new struct Square; // In C++ lang. // So use C++ lang, as it is easy.
    p->length = 15;
    p->breadth = 10;

    std::cout << p->length << std::endl;
    std::cout << p->breadth << std::endl;
}

