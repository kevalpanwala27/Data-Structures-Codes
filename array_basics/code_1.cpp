#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
    int A[5]; // Integer takes 4 bytes of memory.
    A[0]=12;
    A[1]=15;
    A[2]=25;

    cout << sizeof(A) << endl; // Finding ut size of an array using sizeof.
    cout << A[1] << endl; // Printing of element in c++ lang.
    printf("%d\n", A[2]); // Printing of element in c lang.
    return 0;
}


