#include <iostream>
using namespace std;
/*
Syntax for initialization list in inheritance:
constructor (argument list) : initialization section
{
    assignment + other code;
}
class Test{
    int a, b;
    public:
    Test(int i, int j) : a(i), b(j){
        //assignments
    };
*/
class Test{
    int a, b;
    public:
    Test(int i, int j) : a(i), b(j){
        cout<<"Constructor called"<<endl;
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
    }
};
int main(){
    Test t(10, 20);
    return 0;
}