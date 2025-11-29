#include <iostream>
using namespace std;
int main(){
    // This program demonstrates increment and decrement operators in C++
    int a = 5, b = 10;
    cout << "Initial values: a = " << a << ", b = " << b << endl;
    // Increment operator
    a++; // Post-increment: a becomes 6, but the value used in the
    // expression is still 5
    cout << "After a++: a = " << a << endl; // Output: 6
    ++b; // Pre-increment: b becomes 11 immediately
    cout << "After ++b: b = " << b << endl; // Output:
    // Decrement operator
    a--; // Post-decrement: a becomes 5 again, but the value used in the
    // expression is still 6
    cout << "After a--: a = " << a << endl; // Output:
    --b; // Pre-decrement: b becomes 10 immediately
    cout << "After --b: b = " << b << endl; // Output: 10
    // Demonstrating the effect of increment and decrement in expressions
    int c = a++ + ++b; // a is 5, b is 11, so c becomes 5 + 11 = 16
    cout << "c = a++ + ++b: c = " << c << endl
    << endl; // Output: 16
    c = ++a + b--; // a is now 6, b is 11
    cout << "c = ++a + b--: c = " << c << endl; // Output: 18
    cout << "Final values: a = " << a << ", b = " << b<< endl; // Output: a = 7, b = 10
    return 0; // Return 0 to indicate successful execution
}