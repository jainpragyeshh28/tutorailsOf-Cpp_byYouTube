#include<iostream>     // System Haeder file of C++
// #include<this.h>    // User Define Haeder file 
using namespace std;

          // --> !st Part BY CodeWith HARRY
int main(){
    int a=3,b=4;
    cout<<"Operators in C++.................."<<endl;
    // Arithimatics Operators ...............
    cout<<"The Value of a+b is: "<<a+b<<endl;
    cout<<"The Value of a-b is: "<<a-b<<endl;
    cout<<"The Value of a*b is: "<<a*b<<endl;
    cout<<"The Value of a/b is: "<<a/b<<endl;
    cout<<"The Value of a%b is: "<<a%b<<endl;
    cout<<"The Value of a++ is: "<<a++<<endl;
    cout<<"The Value of a-- is: "<<a--<<endl;
    cout<<"The Value of ++a is: "<<++a<<endl;
    cout<<"The Value of --a is: "<<--a<<endl<<endl;
    
    // Assignment Operators ...............
                // It is used to assign values to Variables.
    int x=65,y=47;
    char Q='w';

    // Comparision Operators ................
    cout<<"Is a==b ?? --> "<<(a==b)<<endl;
    cout<<"Is a!=b ?? --> "<<(a!=b)<<endl;
    cout<<"Is a>b ?? --> "<<(a>b)<<endl;
    cout<<"Is a<b ?? --> "<<(a<b)<<endl;
    cout<<"Is a<=b ?? --> "<<(a<=b)<<endl;
    cout<<"Is a>=b ?? --> "<<(a>=b)<<endl<<endl;

    // Logical Operators ...............
    cout<<"The Value of ((a==b) && (a>b)) Logical Operator "<<((a==b) && (a>b))<<endl; // and(Logical) Operator
    cout<<"The Value of ((a==b) || (a>b)) Logical Operator "<<((a==b) || (a<b))<<endl; // or(Logical) Operator
    cout<<"The Value of (!(a==b)) Logical Operator "<<(!(a==b))<<endl; // not (Logical) Operator

    return 0;
}