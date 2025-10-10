#include <iostream>
using namespace std;
int main(){
    //What is a pointer -> A pointer is a variable that stores the memory address of another variable.
    int a = 5;
    int *p = &a; // Pointer p holds the address of variable a
    //& --> (adress of) operator
    // * --> dereference operator
    cout << "Value of a: " << a << endl; // Output the value of a
    *p = 10; // Change the value at the address stored in p
    cout<<"a ="<<*p<<endl; // Output the address stored in p
    cout << "Address of a: " << &a << endl; // Output the address of a
    cout << "Address stored in p: " << p << endl; // Output the address stored in p
    // pointer to pointer
    int **q = &p; // q is a pointer to pointer p
    cout << "Value of p: " << **q << endl; // Output the value of p
    return 0;
}