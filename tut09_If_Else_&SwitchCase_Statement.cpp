#include<iostream>
using namespace std;

          // --> !st Part BY CodeWith HARRY ( If else Statement in C++ ........)
// int main(){
//     int age;
//     cout<<"Enter Your age: ";
//     cin>>age;
//     if(age==18 && age>18){
//         cout<<"You are eligible in our criteria";
//     }
//     else if (age==15)
//     {
//         cout<<"You are 15 & You can JOin us next Year........";
//     }
//     else {
//         cout<<"YOU are not elegible";
//     }
//     return 0;
// }

          // --> 2nd Part BY CodeWith HARRY ( Switch Statement in C++ ........)
int main(){
    int age;
    cout<<"Enter Your age: ";
    cin>>age;
    switch(age)
    {
    case 18:
    cout<<"You are eligible in our criteria ";
    break;
    case 15:
    cout<<"You are 15 & You can JOin us next Year........";
    break;
    case 2:
    cout<<"You are not eligible ";
    break;
    }   
    return 0;
}