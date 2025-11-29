#include <iostream>
using namespace std;

//Base class
class Employee{
    public: 
    int id;
    float salary;
        Employee(){}
        Employee(int inpId, float inpsalary){
            id = inpId;
            salary = inpsalary;
        }
};

//Derived class syntax
//class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
/*
{
    Members, methods, etc...
};
1. Default Visibility mode is private
2. Private Visibility mode: Public members of the base class becomes private members of the derived class
3. Public Visibility mode: Public members of the base class becomes public members of the derived class
4. Private members are never inherited
*/
//Creating a programmer class derived from Employee base class

class Programmer : public Employee{
    public:
    Programmer(int inpId){
        id = inpId;
    }
    int Languagescode = 9;
    void getdata(){
        cout<<id<<endl;
    }

};

int main(){
    Employee harry(1, 3000.0), rohan(2, 4000.0);
    cout << "Employee objects created successfully." << endl;
    cout<<harry.salary<<endl;
    cout<<rohan.salary<<endl;
    Programmer skillf(3);
    skillf.getdata();
    return 0;
}