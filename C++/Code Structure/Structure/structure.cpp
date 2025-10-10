#include <iostream>
using namespace std;
typedef struct employee
{
    int id;
    char rank;
    float salary;
} ep;
//typedef is used to create an alias for the struct employee, allowing us to use 'ep' instead of 'struct employee' it decreases syntax complexity.
int main(){
    ep Abhi;
    Abhi.id = 121;
    Abhi.rank = 'S';
    Abhi.salary = 50000.50;
    cout<<"Employee Details:" << endl;
    cout << "ID: " << Abhi.id << endl;
    cout << "Rank: " << Abhi.rank << endl;
    cout << "Salary: " << Abhi.salary << endl;
    return 0;
}