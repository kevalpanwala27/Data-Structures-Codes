// Reference is a nick name given to a variable.

#include <stdio.h>
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
   int a = 10;
   int &r = a; // Its a reference // Declaration + initialization.
   std::cout << a << std::endl;
   r++;
   std::cout << a << std::endl; // as a and r are same only.
   std::cout << r << std::endl;
   return 0;
}
// So a itself have another name r.
// As a and r are same only so this we called as reference in C++.


