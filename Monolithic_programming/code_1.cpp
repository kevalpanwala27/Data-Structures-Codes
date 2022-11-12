#include <stdio.h>
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int length, breadth;
    cout << "Enter length and breadth:" << endl;
    cin >> length >> breadth;
    int area = length * breadth;
    std::cout << "Area is: " << area << std::endl;
    int perimeter = 2*(length + breadth);
    std::cout << "Perimeter is: " << perimeter <<std::endl;
    return 0;
}
