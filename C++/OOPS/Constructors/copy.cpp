#include <iostream>
using namespace std;

class Num
{
    int a;

public:
    Num(){
        a = 0;
    }
    Num(int num)
    {
        a = num;
    }
    Num(Num &obj)
    {
        cout<<"Copy constructor called!!"<<endl;
        a = obj.a;
    }
    //When no copy constructor is found compiler gives its own copy constructor
    void display()
    {
        cout << "The number for this object is " << a << endl;
    }
};
int main()
{
    Num x, y, z(45);
    z.display();
    x.display();
    y.display();
    Num z1(z); // Copy constructor invoked
    z1.display();
    return 0;
}