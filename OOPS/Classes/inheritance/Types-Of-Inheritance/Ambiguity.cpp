#include <iostream>
using namespace std;

class Base1 {
    public:
    void greet() {
        cout << "Hello from Base1" << endl;
    }
};    

class Base2{
    public:
    void greet() {
        cout << "Hello from Base2" << endl;
    }
};

class Derived : public Base1, public Base2{
    int a;
public:
    void greet() {
    Base1::greet(); // Resolving ambiguity by specifying which base class method to call
    }
};
int main(){
    Base1 b1;
    Base2 b2;
    b1.greet();
    b2.greet();
    Derived d;
    d.greet();
    return 0;
}