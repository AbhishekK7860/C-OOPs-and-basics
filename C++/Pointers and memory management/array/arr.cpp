#include <iostream>
using namespace std;
int main(){
    // What is an array --> An array is a collection of elements of the same type stored in contiguous memory locations.
    int arr[5] = {1, 2, 3, 4, 5}; // Declaration and initialization of an array of integers
    cout << "Elements of the array: ";
    cout<< arr[0] << " " << arr[1] << " " << arr[2] << " " << arr[3] << " " << arr[4] << endl; // Output the elements of the array
    return 0;
}