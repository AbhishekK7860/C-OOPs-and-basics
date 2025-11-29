#include <iostream>
int c = 40; // Global variable
using namespace std;
int main(){
    int a, b;
    cout<<"Enter the first number:";
    cin>>a;
    cout<<"Enter the second number:";
    cin>>b;
    int c = a + b; // Local variable with the same name as global variable
    cout<<"The sum of "<<a<<" and "<<b<<" is: "<<c<<endl; // This will print the local variable c
    cout<<"The value of global variable c is: "<<::c<<endl; // This will print the global variable c using scope resolution operator whch is '::'
    return 0; 
}