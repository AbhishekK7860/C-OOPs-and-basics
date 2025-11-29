#include <iostream>
using namespace std;
int main(){
    // This program demosntrate logical operators in C++
    // Logical operators include && (AND), || (OR), and ! (NOT)
    int a = 5, b = 10;
    cout << "Initial values: a = " << a << ", b = " << b << endl;
    // Logical AND operator
    cout << "a < b && b > 0: " << (a < b && b > 0) << endl; // Output: 1 (true)
    cout << "a > b && b > 0: " << (a > b && b > 0) << endl; // Output: 0 (false)
    // Logical OR operator
    cout << "a < b || b < 0: " << (a < b || b < 0) << endl; // Output: 1 (true)
    cout << "a > b || b < 0: " << (a > b || b < 0) << endl; // Output: 0 (false)
    // Logical NOT operator
    cout << "! (a < b): " << !(a < b) << endl; // Output: 0 (false)
    cout << "! (a > b): " << !(a > b) << endl; // Output: 1 (true)
    return 0;

}
// these are basic operators in C++ and there is one more operator which is bitwise operator