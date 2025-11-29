#include <iostream>
using namespace std;

template <class T>
class Abhi{
    public:
        T data;
        Abhi(T a){
            data = a;
        }
        void display();
};
template <class T>
void Abhi<T>:: display(){
            cout<<data<<endl;
        }
void func(int a){
    cout<< "I am first Func()"<<a<<endl;
}

template <class T>
void func1(T a){
    cout<<"I am Templatised Func()"<<a<<endl;
}

int main(){
    Abhi<int> obj1(5);
    obj1.display();

    func(10);  //calls non-templatised func
    func1(15); //calls templatised func
    return 0;
}