#include <iostream>
using namespace std;
int main(){
    // Float, double and long double literals in C++
    float a = 5.5f; // here if we pass this value it will be passed as double but when we add 'f' at the end it will be passed as float
    cout<<"The value of a is: "<<a<<endl;
    double b = 5.5; // here if we pass this value it will be passed as double by default
    // we don't need to add 'd' at the end of the value
    cout<<"The value of b is: "<<b<<endl;
    long double c = 5.5l; // here if we pass this value it will be passed as long double
    // we need to add 'l' at the end of the value to make it long double
    cout<<"The value of c is: "<<c<<endl;
    // The float type has less precision than double and long double
    // The double type has more precision than float but less than long double
    // The long double type has the highest precision among these three types
    // also we can use 'F' at the end of the value to make it float
    // and 'L' at the end of the value to make it long double
    // Example of using 'F' and 'L'
    float d = 5.5F; // 'F' is used to indicate float
    long double e = 5.5L; // 'L' is used to indicate long double
    // for prove we can use sizeof operator
    cout << "Size of float: " << sizeof(5.5f) << " bytes" << endl; // Output: 4 bytes
    cout << "Size of double: " << sizeof(5.5) << " bytes" << endl; // Output: 8 bytes
    cout << "Size of long double: " << sizeof(5.5l) << " bytes" << endl; // Output: 16 bytes
    cout << "Size of float with F: " << sizeof(5.5F) << " bytes" << endl; // Output: 4 bytes
    cout << "Size of long double with L: " << sizeof(5.5L) << " bytes" << endl; // Output: 16 bytes
    // Note: The size of these types may vary depending on the compiler and architecture
    return 0;
}