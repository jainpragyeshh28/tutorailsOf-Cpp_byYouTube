#include<iostream>
using namespace std;

          // --> !st Part BY CodeWith HARRY ( Breaks in C++ ........)
// int main(){
//     int i;
//     for (i=0;i<40;i++)
//     {
//         if(i==2)
//         {
//             break;
//         }
//         cout<<i<<endl;
//     }
//     return 0;
// }

          // --> 2nd Part BY CodeWith HARRY ( Continue in C++ ........)
int main(){
    int i;
    for(i=0;i<40;i++)
    {
        if(i==2){
            continue;
        }
        cout<<i<<endl;
    }
    return 0;
}