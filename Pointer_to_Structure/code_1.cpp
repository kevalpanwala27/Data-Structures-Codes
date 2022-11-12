#include <stdio.h>
#include <iostream>
using namespace std;
struct Square
{
    int length;
    int breadth;
};

int main()
{
    struct Square s = {10,5};
    struct Square *p = &s; // Declaration + initialization
    // In structures we use dot operator to access the members.
    // But here have to use (->) this arrow.
    s.length = 15;
    p->length = 25;
    s.breadth = 10;
    p->breadth = 15;
    cout << s.length << endl;
    cout << p->length << endl; // for pointer use arrow.
    cout << s.breadth << endl;
    cout << p->breadth << endl; // for pointer use arrow.
   return 0;
}


// When pointer to a structure is used, we have to use arrow here.

