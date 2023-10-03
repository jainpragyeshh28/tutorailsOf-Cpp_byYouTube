#include<iostream>
using namespace std;
int c=65;

          // --> !st Part BY CodeWith HARRY ( Built in Data Types........)
// int main(){
//     int a,b,c;
//     cout<<"Hello, Pragyesh Jain #7 "<<endl;
//     cout<<"Enter frist Value: ";
//     cin>>a;    
//     cout<<"Enter Second Value: ";    
//     cin>>b;
//     c=a+b;
//     cout<<"The SUM of Given Number is "<<c<<endl;
//     cout<<"The Value of global C is "<<::c<<endl;
//     return 0;
// }

          // --> 2nd Part BY CodeWith HARRY ( Float, double and long double Literals........) 
// int main(){
//     float d=34.4;
//     long double e=34.4;
//     cout<<"The Size of 34.4 is "<<sizeof(34.4)<<endl;
//     cout<<"The Size of 34.4f is "<<sizeof(34.4f)<<endl;
//     cout<<"The Size of 34.4F is "<<sizeof(34.4F)<<endl;
//     cout<<"The Size of 34.4l is "<<sizeof(34.4l)<<endl;
//     cout<<"The Size of 34.4L is "<<sizeof(34.4L)<<endl;
//     return 0;
// }          

          // --> 3rd Part BY CodeWith HARRY ( Reference Variables........) 
// int main(){
//     float x = 455;
//     float & y = x;
//     cout<<"The Value of x is "<<x<<endl;
//     cout<<"The Value of y is "<<y<<endl;
//     return 0;
// }

          // --> 4th Part BY CodeWith HARRY ( Typecasting........) 
int main(){
    int a=45;
    float b=45.67;
    cout<<"The Value of a is in Float is "<<float(a)<<endl;
    cout<<"The Value of a is in Float is "<<(float)a<<endl;

    cout<<"The Value of b is in integer is "<<int(b)<<endl;
    cout<<"The Value of b is in integer is "<<(int)b<<endl<<endl;
    int c = int(b);

    cout<<"The Resultof Expression(a+b) is "<<(a+b)<<endl;
    cout<<"The Resultof Expression(a+int(b)) is "<<(a+int(b))<<endl;
    return 0;
}