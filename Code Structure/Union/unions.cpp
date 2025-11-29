#include <iostream>
using namespace std;
union employee
{
    int id;
    char rank;
    float salary;
};
int main(){
    union employee abhi;
    abhi.id = 121; // Assigning value to id
    cout << "Employee ID: " << abhi.id << endl; // Output the id
    abhi.rank = 'S'; // Assigning value to rank
    cout << "Employee Rank: " << abhi.rank << endl; // Output the rank
    abhi.salary = 50000.50; // Assigning value to salary
    cout << "Employee Salary: " << abhi.salary << endl; // Output the salary
    return 0;
}