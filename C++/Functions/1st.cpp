#include <iostream>
using namespace std;
int main(){
   int sum(int a, int b);//function prototype
   int x, y;
   cout << "Enter two integers: ";
   cin >> x >> y;
   int result = sum(x, y);
   cout << "The sum is: " << result << endl;
   return 0;
}
int sum(int a, int b){
   int c = a + b;
   return c;
}