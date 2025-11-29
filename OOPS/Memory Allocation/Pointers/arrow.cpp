#include <iostream>
using namespace std;

class Complex{
    int real, imag;
    public:
        void getData(){
            cout<<"The real part is "<<real<<endl;
            cout<<"The imaginary part is "<<imag<<endl;
        }
        void setData(int a, int b){
            real = a;
            imag = b;
        }
};
int main(){
    // Complex c1;
    // Complex *ptr = &c1;
    Complex *ptr = new Complex;
    //  is exactly same as
    ptr->setData(4, 6);
    // (*ptr).getData(); is as good as
    ptr->getData();

    //Array Of Objects
    Complex *ptr1 = new Complex[4];
    ptr1->setData(1, 2);
    ptr1->getData();
    return 0;
}