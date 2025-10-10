#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int *p = arr; // in case of array we dont need to use & operator, as the name of the array itself acts as a pointer to the first element
    int i = 0;
    while(i < n){
        cout <<*(p + i) << " ";// here we are using pointer arithmetic to access array elements
        i++;
    }
    return 0;
}