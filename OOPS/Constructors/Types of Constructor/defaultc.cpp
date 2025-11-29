// Default Constructor
#include <iostream>
using namespace std;
class Complex
{
    int a, b;

public:
    Complex(void);
    void printNumber()
    {
        cout << "Your Number is " << a << "+" << b << "i" << endl;
    }
};

Complex::Complex(void)// This is a default constructor as it takes no parameters
{
    a = 0;
    b = 0;
}
int main()
{
    Complex a;
    a.printNumber();
    return 0;
}

//We have to doesnt run it separately thats why its called default constructor