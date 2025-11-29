#include <iostream>
using namespace std;

template <class T1 =int, class T2 = float>
class Abhi{
public:
   T1 a;
   T2 b;
   Abhi(T1 x, T2 y){
       a = x;
       b = y;
   }
    void display(){
         cout<<"The value of a:"<<a<<endl;
         cout<<"The value of b:"<<b<<endl;
    }
};
int main(){
    Abhi<> obj1(58, 6.7); // Default int and float
    obj1.display();
    Abhi<char, float> obj2('A', 9.8); // char and float
    obj2.display();
    return 0;
}