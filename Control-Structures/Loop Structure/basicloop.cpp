#include <iostream>
using namespace std;
int main(){
    /*
    Basic loop structure in C++
    there are three types of loops in C++:
    1. For loop
    2. While loop
    3. Do-while loop
    This code demonstrates a simple for loop that prints numbers from 1 to 5.
    */
   int i;
   for(i = 1; i <= 5; i++){
        cout<<"Number: "<<i<<endl;
   }
   return 0;
}
// here the loop is working as follows:
// 1st here the i value is 1 and its checking that if i is less than or equal to 5
// 2nd if the condition is true then it will print the value of i
// 3rd after printing the value of i it will increment the value of i by 1
// 4th it will again check the condition and repeat the process until the condition is false
// After the loop ends, the program will exit with a return value of 0.