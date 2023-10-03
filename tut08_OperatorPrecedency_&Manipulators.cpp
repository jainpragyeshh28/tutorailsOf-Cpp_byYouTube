#include<iostream>
#include<iomanip>
using namespace std;

          // --> !st Part BY CodeWith HARRY ( Constants in C++........)
// int main(){
//     const int a=3;
//     cout<<"The Value of a is: "<<a<<endl;
//     // a=5      //You Can't Change the value of a because a is already declared Constant in Line 7: 
//     return 0;
// }

          // --> 2nd Part BY CodeWith HARRY ( Manipulators in C++........) 
// int main(){
//     int a=23,b=76,c=1347;
//     cout<<"The Value of a setw is "<<setw(4)<<a<<endl;
//     cout<<"The Value of b setw is "<<setw(4)<<b<<endl;
//     cout<<"The Value of c setw is "<<setw(4)<<c<<endl;
//     cout<<"The Value of a without setw is "<<a<<endl;
//     cout<<"The Value of b without setw is "<<b<<endl;
//     cout<<"The Value of c without setw is "<<c<<endl;
//     return 0;
// }

          // --> 3rd Part BY CodeWith HARRY ( Operator Precedence in C++........) 
int main(){
    int a =3, b=4;
    int c = ((((a*5)+b)-45)+87);
    cout<<"The VALUE of C is "<<c;
    return 0;
}