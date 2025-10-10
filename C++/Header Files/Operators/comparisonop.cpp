#include <iostream>
using namespace std;
int main(){
    // This program demonstrates comparison operators in C++
    int a = 5, b = 10;
    cout << "Initial values: a = " << a << ", b = " << b << endl;
    // Comparison operators include ==, !=, <, >, <=, >=
    cout << "a == b: " << (a == b) << endl; // Output: 0 (false)
    cout << "a != b: " << (a != b) << endl; // Output: 1 (true)
    cout << "a < b: " << (a < b) << endl; // Output: 1 (true)
    cout << "a > b: " << (a > b) << endl; // Output: 0 (false)
    cout << "a <= b: " << (a <= b) << endl; // Output: 1 (true)
    cout << "a >= b: " << (a >= b) << endl; // Output: 0 (false)
    return 0;
}