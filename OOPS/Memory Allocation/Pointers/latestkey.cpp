#include <iostream>
using namespace std;

int main(){
    //Basic Example
    int a = 10;
    int *ptr = &a; // pointer variable ptr is storing the address of a
    cout<<"The value of a is "<<*(ptr)<<endl;

    //new keyword
    float *p = new float(34.5f); // dynamically allocating memory for a float and initializing it to 34.5
    //Here we storing the value on a adress without knowing the address and variable name
    cout<<"The value at address p is "<<*(p)<<endl;

    int *arr = new int[3];
    arr[0] = 10;
    *(arr + 1) = 20;
    arr[2] = 30;
    cout<<"The values in the array are "<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<endl;

    //Delete operator
    delete [] arr; // deallocating the memory allocated for array
    cout<<"Value of arr[0] after deleting the array "<<arr[0]<<endl; //undefined behaviour
    return 0;
}