#include <iostream>
using namespace std;

class Employee 
{
    private: // its a private modifier 
        int a, b, c;
    public: // its a public modifier
        int d, e;
        void setData(int a1, int b1, int c1); // declaration
        void getData(){
             cout<<"The value of a is "<<a<<endl;
             cout<<"The value of b is "<<b<<endl;
             cout<<"The value of c is "<<c<<endl;
             cout<<"The value of d is "<<d<<endl;
             cout<<"The value of e is "<<e<<endl;
        }
};

void Employee :: setData(int a1, int b1, int c1){
    a = a1;
    b = b1;
    c = c1;
}

int main(){
    Employee Abhi;
    // here we cant give values to a b and c like d because those are private variable which can only be accessed by class functions.
    Abhi.d = 10;
    Abhi.e = 20;
    Abhi.setData(1, 2, 3);
    Abhi.getData();
    return 0;
}