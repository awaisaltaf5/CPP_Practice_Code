#include<iostream>
using namespace std;
//****Built in Data types*******
// for global variables:
int c=45;

int main(){
    int a, b, c;
    cout<<"Enter the value of a:"<<endl;
    cin>>a;
    cout<<"Enter the value of b:"<<endl;
    cin>>b;
    c= a+b;
    cout<<"The sum is " <<c<<endl;
    cout<<"The global c is "  <<::c;
    return 0;
}

