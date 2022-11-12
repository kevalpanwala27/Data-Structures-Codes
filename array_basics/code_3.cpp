#include <stdio.h>
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter size: ";
    cin >> n; // For taking input form the user in C++ lang.
    // Variable sized array. - We cannot initialize it but we can declare it.
    int A[n]; // declaration can be performed.
    // But we can initialize it by taking values from keyboard or we can assign it.
    A[0]=2;
    for(int x:A) // Here, we are taking values from the user so, we will get garbage values...!!!
    {
        cout << x << endl;
    }
    return 0;
}

// Remember! - variable size array cannot be initialized, but we can declare it...!!!
// Remember! - we can get garbage values...!!!
// Garbage values are also values but we don't owned that value...!!!



