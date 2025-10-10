#include <iostream>
using namespace std;
int main(){
    // This program demosntrates assignment and compound assignment operators in C++
    // Assignment operator '=' is used to assign values to variables
    int a = 5; // Assign 5 to variable a
    int b = 10; // Assign 10 to variable b
    cout << "Initial values: a = " << a << ", b = " << b << endl;
    // Compound assignment operators combine assignment with another operation      
    a += 2; // Equivalent to a = a + 2; a becomes 7
    cout << "After a += 2: a = " << a << endl; // Output: 7
    b -= 3; // Equivalent to b = b - 3; b becomes 7
    cout << "After b -= 3: b = " << b << endl; // Output: 7
    a *= 2; // Equivalent to a = a * 2; a becomes
    cout << "After a *= 2: a = " << a << endl; // Output: 14
    b /= 2; // Equivalent to b = b / 2; b becomes 3
    cout << "After b /= 2: b = " << b << endl; // Output: 3
    a %= 3; // Equivalent to a = a % 3; a becomes
    cout << "After a %= 3: a = " << a << endl; // Output: 2
    b &= 1; // Equivalent to b = b & 1; b becomes 1
    cout << "After b &= 1: b = " << b << endl; // Output: 1
    b |= 2; // Equivalent to b = b | 2; b becomes 3
    cout << "After b |= 2: b = " << b << endl; // Output
    b ^= 1; // Equivalent to b = b ^ 1; b becomes 2
    cout << "After b ^= 1: b = " << b << endl; // Output
    b <<= 1; // Equivalent to b = b << 1; b becomes 4
    cout << "After b <<= 1: b = " << b << endl; // Output: 4
    b >>= 1; // Equivalent to b = b >> 1; b becomes
    cout << "After b >>= 1: b = " << b << endl; // Output: 2
    return 0; // Return 0 to indicate successful execution
}