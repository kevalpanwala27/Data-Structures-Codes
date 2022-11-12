// Structure is a collection of data members under one name and those data members maybe of similar or not similar.

#include <stdio.h>
#include <iostream>
using namespace std;
struct Rectangle
{
    int length;
    int breadth;
};
int main() 
{
    // struct Rectangle r; // Only Declaration of structure.
    struct Rectangle r = {10,5}; // This is Declaration + Initialization.
    // in this example, changing of values.
    r.length = 15; // For accessing the members of the structure, we use dot operator(.).
    r.breadth = 10; // For accessing the members of the structure, we use dot operator(.).

    cout << r.length << endl; // Printing length.
    cout << r.breadth << endl; // Printing breadth.
    printf("Size is: %lu\n", sizeof(r));
    printf("Area of Rectangle is %d\n", r.length*r.breadth);
    return 0;
}


