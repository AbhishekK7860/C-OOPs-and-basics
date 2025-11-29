#include <iostream>
using namespace std;
/* Case: 1
Class B : public A{
    // order of execution of constructor -> first A() then B()
    };

Case : 2
class A : public B, public C{
    //order of execution of constructor ->B() then C() and A()
};

Case : 3
Class A: public B, virtual public C{
    //order of execution of constructor -> C() then B() and A()
};
*/

class Base{
    int data;
    public:
    Base(int i){
        data = i;
        cout<<"Base class constructor called"<<endl;
    }
    void printData(){
        cout<<"The value of data is "<<data<<endl;
    }
};

class  Base2{
    int data2;
    public:
    Base2(int j){
        data2 = j;
        cout<<"Base2 class constructor called"<<endl;
    }
    void printData2(){
        cout<<"The value of data2 is "<<data2<<endl;
    }
};

class Derived : public Base, public Base2{
    int derivedData;
    public:
    Derived(int a, int b, int c) : Base(a), Base2(b){
        derivedData = c;
        cout<<"Derived class constructor called"<<endl;
    }
    void printData3(){
        cout<<"The value of derived data is "<<derivedData<<endl;
    }
};
int main(){
    Derived d(10, 20, 30);
    d.printData();
    d.printData2();
    d.printData3();
    return 0;
}