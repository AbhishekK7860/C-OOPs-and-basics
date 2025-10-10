#include <iostream>
using namespace std;

class B;

class A{
    int data;
    public:
        void setValue(int value){
            data = value;
        }
        friend void add(A, B);
};

class B{
    int num;
    public:
        void setValue(int value){
            num = value;
        } 
        friend void add(A, B);
};
void add(A o1, B o2){
    cout<<"The sum of data is "<<o1.data + o2.num<<endl; // we cannot access private members of class A and B here
}
int main(){
    A a;
    a.setValue(5);
    B b;
    b.setValue(7);

    add(a, b);
    return 0;
}