// STRUCTURE AS PARAMETER BUT USING POINTER HERE...


#include <stdio.h>
#include <iostream>
using namespace std;
struct Rectangle
{
    int length;
    int breadth;
};
void changeLength(struct Rectangle *p, int l)
{
    p->length = l;
    std::cout << p->length << std::endl;
    std::cout << p->breadth << std::endl;
}
int main(int argc, char const *argv[])
{
    struct Rectangle r = {10,5};
    changeLength(&r, 25);
    return 0;
}
// It is passed as call by address.



