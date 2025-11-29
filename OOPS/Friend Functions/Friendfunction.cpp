#include <iostream>
using namespace std;

class Complex{
    int a, b;
    public: 
        void setNumber(int n1, int n2){
            a = n1;
            b = n2;
        }
        friend Complex sumcomplex(Complex o1, Complex o2); // friend function declaration
        void printNumber(){
            cout<<"Your number is "<<a<<" +"<<b<<"i"<<endl;
        }
};
Complex sumcomplex(Complex o1, Complex o2){ // its not the part of class it means it can access private members of class
    Complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
} 
int main(){
    Complex c1, c2;
    c1.setNumber(1, 4);
    c1.printNumber();
    c2.setNumber(5, 8);
    c2.printNumber();
    Complex c3 = sumcomplex(c1, c2);
    c3.printNumber();
    return 0;
}
//Properties of friend function
/*
1. Not in the scope of class
2. Since it is not in the scope of class, it cannot be called from the object of that class. c1.sumcomplex() == Invalid
3. Can be invoked without the help of any object
4. Usually contains the objects as arguments
5. Can be declared inside public or private section of the class
6. It cannot access the members directly by their names and need object_name.member_name to access any member.
*/