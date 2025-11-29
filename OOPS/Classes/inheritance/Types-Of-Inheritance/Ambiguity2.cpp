#include <iostream>
using namespace std;
class B{
    public:
    void show(){
        cout<<"Hello world"<<endl;
    }
};
class D1 : public B{
    public:
    // here show() overwrite base class show() method
    void show(){
        cout<<"Hello from D1"<<endl;
    }
};
int main(){
    D1 d1;
    d1.show(); // Calls D1's show()
    return 0;
}