#include <iostream>
using namespace std;

int main() {
    // Constants in C++
    // Constants are fixed values that cannot be changed during the execution of a program

    int a = 5; // This is a variable, its value can be changed
    cout << "The value of a is: " << a << endl;

    a = 10; // Reassigning a new value to 'a'
    cout << "The value of a after reassignment is: " << a << endl;

    // Now we use a constant
    const int b = 20; // 'b' is a constant, its value cannot be changed
    cout << "The value of b is: " << b << endl;

    // b = 30; // Uncommenting this line will cause a compilation error because 'b' is a constant

    return 0;
}
// Constants are useful when you want to define values that should not change, such as mathematical constants or configuration settings
// In C++, you can also define constants using the 'const' keyword, which makes the variable immutable