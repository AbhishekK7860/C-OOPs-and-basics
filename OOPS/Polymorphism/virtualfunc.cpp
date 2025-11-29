#include <iostream>
using namespace std;
class BaseClass{
    public:
       int var1;
        virtual void display(){
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
    baseptr = &objderived;
    baseptr->display();
    return 0;
}