#include <stdio.h>
#include <iostream>
using namespace std;
int main() {
    // int A[5]={2,4,6,8,10}; we can give size like this also.
    int A[]={2,4,6,8,10,12,14}; // Initialization + declaration.
    int B[10]={2,4,6,8,10,12,14}; // And rest of the elements, default will be zero.

    cout << sizeof(B) << endl; // As size of integer is 4 bytes.
    cout << sizeof(A) << endl; 
    cout << endl;

    // For printing of an array. Using for loop.
    for (int i = 0; i < 10; i++) 
    {
        cout << B[i] << endl;
    }    
    cout << endl;

    // For printing of an array. Using for-each loop.
    for (int x:B) 
    {
        cout << x << endl;
    }
    return 0;
}


