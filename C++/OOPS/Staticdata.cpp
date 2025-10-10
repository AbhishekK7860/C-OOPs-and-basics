#include <iostream>
using namespace std;

class Employee{
    int id;
    static int count;
    public:
        void setData(void){
            cout<<"Enter the id of employee "<<endl;
            cin>>id;
            count++;
        }
        void getData(void){
            cout<<"The Id of this employee is: "<<id<<" and this is employee number "<<count<<endl;
        }
        static void getcount(void){
            cout<<"The value of count is "<<count<<endl;
        }
};
int Employee:: count; // default value is 0
int main(){
    Employee abhi, dikshu, surbhi;
    abhi.setData();
    abhi.getData();
    Employee::getcount();
    dikshu.setData();
    dikshu.getData();
    Employee::getcount();
    surbhi.setData();
    surbhi.getData();
    Employee::getcount();
    return 0;
}