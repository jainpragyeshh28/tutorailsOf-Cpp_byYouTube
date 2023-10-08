#include<iostream>
using namespace std;

          // --> !st Part BY CodeWith HARRY ( Pointers in C++ ........)
// int main(){
//     int a=3;
//     int* b=&a;
//     cout<<"The addresss of a is "<<&a<<endl;
//     cout<<"The addresss of a is "<<b<<endl;
//     cout<<"The Value at address b is "<<*b<<endl;
//     return 0;
// }    

          // --> 2nd Part BY CodeWith HARRY ( Pointer to Pointer in C++ ........)
int main(){
    int a=3;
    int* b=&a;
    int** c=&b;
    cout<<"The address of b is "<<&b<<endl;
    cout<<"The Value at address c is "<<*c<<endl;
    cout<<"The Value at address Value_at(Value_at(c)) is "<<**c<<endl;
    return 0;
}