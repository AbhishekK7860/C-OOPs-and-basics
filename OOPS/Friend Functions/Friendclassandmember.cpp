#include <iostream>
using namespace std;
class Complex;

class Calculator{
    public:
        int add(int a, int b){
            return (a+b);
        }

        int sumComplex(Complex , Complex );
        int sumcompComplex(Complex , Complex);
};

class Complex{
    int a, b;
    public: 
        void setNumber(int n1, int n2){
            a = n1;
            b = n2;
        }
        //Aliter: Entire class as friend
        friend class Calculator; // friend class declaration in this declaration all the member function of calculator class are friend of complex class
        // for individual friend function we can also declare like this
        // friend int Calculator::sumComplex(Complex , Complex);
        void printNumber(){
            cout<<"Your number is "<<a<<" +"<<b<<"i"<<endl;
        }
};
int Calculator::sumComplex(Complex o1, Complex o2){
    return (o1.a + o2.a);
}
int Calculator::sumcompComplex(Complex o1, Complex o2){
    return (o1.b + o2.b);
}
int main(){
    Complex o1, o2;
    o1.setNumber(1, 4);
    o1.printNumber();
    o2.setNumber(5, 8);
    o2.printNumber();
    Calculator calc;
    int res = calc.sumComplex(o1, o2);
    cout<<"The sum of real part of o1 and o2 is "<<res<<endl;
    int resc = calc.sumcompComplex(o1, o2);
    cout<<"The sum of imaginary part of o1 and o2 is "<<resc<<endl;
    return 0;
}