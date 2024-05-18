#include<iostream>
using namespace std;
int main(){
    int a = 45;
    float b = 45.46;
    cout<<"\nThe value of a is" <<float(a);
     //  We can write also in this way   // cout<<"\nThe value of a is" <<(float)a;
    cout<<"\nThe value of b is" <<int(b);
    int c = int(b);

    cout<<"\nThe value of c is" << int(b);

    cout<<"\nThe value of a+b" <<a+b;

    cout<<"\nThe expression is" <<c+(int)b;


    return 0;
}