#include <iostream>
using namespace std;

class BaseClass{
    public:
       int var1;
         void display(){
              cout << "Base class var1: " << var1 << endl;
         }
};

class DerivedClass : public  BaseClass{
    public:
    int var2;
         void display(){
              cout << "Base class var1: " << var1 << endl;
              cout << "Derived class var2: " << var2 << endl;
         }
};
int main(){
    BaseClass *baseptr;
    BaseClass objbase;
    DerivedClass objderived;
    baseptr = &objderived; // Pointing base class pointer to derived class object
    baseptr->var1 = 10;
    baseptr->display();
    // baseptr->var2 = 20; // This will throw an error as base class pointer cannot access derived class members
    DerivedClass *derivedptr;
    derivedptr = &objderived;
    derivedptr->var2 = 20; // This is valid as derived class pointer is pointing to derived class object
    derivedptr->display();
    return 0;
}