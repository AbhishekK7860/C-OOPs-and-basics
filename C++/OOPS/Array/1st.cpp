#include <iostream>
using namespace std;

class Employee{
    int id;
    int salary;
    public:
    void setId(void){
        cout<<"Enter the id of employee:";
        cin>>id;
    }
    void getId(void){
        cout<<"The id of employee is: "<<id<<endl;
    }
};
int main(){
    Employee insta[4];
    for(int i=0; i<4; i++){
        insta[i].setId();
        insta[i].getId();
    }
    return 0;
}