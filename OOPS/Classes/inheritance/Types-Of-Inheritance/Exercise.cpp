#include <iostream>
#include <cmath>
using namespace std;

class Simplecalc{
    protected:
    int a, b;
    public:
    void getData(){
        cout<<"Enter the value of a:"<<endl;
        cin>>a;
        cout<<"Enter the value of b:"<<endl;
        cin>>b;
    }
    void operations(){
        cout<<"The value of a + b is "<<a + b<<endl;
        cout<<"The value of a - b is "<<a - b<<endl;
        cout<<"The value of a * b is "<<a * b<<endl;
        cout<<"The value of a / b is "<<a / b<<endl;
    }
};

class scientificcalc : virtual public Simplecalc{
    public:
    void scientific_operations(){
        cout<<"The value of a^b is "<<pow(a, b)<<endl;
        cout<<"The value of log a is "<<log(a)<<endl;
        cout<<"The value of log b is "<<log(b)<<endl;
        cout<<"The value of sqrt a is "<<sqrt(a)<<endl;
        cout<<"The value of sqrt b is "<<sqrt(b)<<endl;
    }
};

class hybridcalc : virtual public Simplecalc, public scientificcalc{
    public:
    void display(){
        operations();
        scientific_operations();
    }
};
int main(){
    hybridcalc calc;
    calc.getData();
    calc.display();
    return 0;
}