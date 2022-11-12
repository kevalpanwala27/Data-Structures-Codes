// POINTER TO AN ARRAY. 

// ALLOCATING MEMORY TO HEAP IN AN ARRAY.

#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int *p;
    p = (int *)malloc(5*sizeof(int)); // This is using C lang.
    p = new int[5]; // This is using C++ lang.
    p[0]=10; p[1]=20; p[2]=30; p[3]=40; p[4]=50;
    // Printing a pointer to an array.
    for (int i = 0; i < 5; i++)
    {
        std::cout << p[i] << std::endl;   
    }
    // By C++ .
    std::cout << "" << std::endl;
    for (int i = 0; i < 5; i++)
    {
        std::cout << p[i] << std::endl;   
    }
    return 0;
}


