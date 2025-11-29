#include <iostream>
using namespace std;
int main(){
    // Typecasting in C++
    int a = 5;
    cout<<"The value of a is:"<<a<<endl;
    //in typecasting now we will convert int to float
    cout<<"The value of a after typecasting to float is:"<<float(a)<<endl; // Typecasting int to float also we can write float(a)
    float b = 5.5;
    cout<<"The value of b is:"<<b<<endl;
    //in typecasting now we will convert float to int
    cout<<"The value of b after typecasting to int is:"<<int(b)<<endl; // Typecasting float to int

    int c = int(b);

    cout<<"The expression is:"<<a + b<<endl;
    // Typecasting in expressions
    cout<<"The expression after typecasting is :"<<a + int(b)<<endl;
    cout<<"The Expression is:"<<a + (int)b<<endl;
    // also it can work for double , long double and char
    int d = 65; // ASCII value of 'A'
    cout<<"The value of d is:"<<d<<endl;
    // Typecasting int to char
    cout<<"The value of d after typecasting to char is:"<<char(d)<<endl; // Typecasting int to char
    return 0;
}