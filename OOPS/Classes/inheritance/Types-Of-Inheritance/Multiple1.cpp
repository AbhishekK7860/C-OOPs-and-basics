#include <iostream>
using namespace std;

// Syntax for multiple inheritance
// class derived class-name: visibility mode base1, visibility mode base2
//{
//    class body of derived class
//};

class Base1
{
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};

class Base2
{
protected:
    int base2int;

public:
    void set_base2int(int a)
    {
        base2int = a;
    }
};

class Derived : public Base1, public Base2{
public:
    void show()
    {
        cout << "The value of base1int is " << base1int << endl;
        cout << "The value of base2int is " << base2int << endl;
        cout << "The sum of these values is " << base1int + base2int << endl;
    }
};
int main()
{
    Derived abhi;
    abhi.set_base1int(34);
    abhi.set_base2int(45);
    abhi.show();
    return 0;
}