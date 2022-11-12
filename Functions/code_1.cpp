// EXAMPLE TO ADD TWO NUMBERS USING FUNCTION...
#include <stdio.h>
#include <iostream>
using namespace std;

int add(int a, int b)
{
    int c;
    c = a+b;
    return c;
}
int main(int argc, char const *argv[])
{
    int num1 = 10, num2 = 5, sum;
    sum = add(num1,num2);
    cout << "Sum is: " << sum << endl;
    return 0;
}

