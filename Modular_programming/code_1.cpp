#include <stdio.h>
#include <iostream>
using namespace std;
int area(int length, int breadth)
{
    return length*breadth;
}
int perimeter(int length, int breadth)
{
    return 2*(length + breadth);
}
int main(int argc, char const *argv[])
{
    int x,y;
    x = area(10,5);
    y = perimeter(10,5);   
    cout << "Area is: " << x << endl;
    std::cout << "Perimeter is: " << y << std::endl;
    return 0;
}
