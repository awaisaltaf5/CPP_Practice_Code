#include<iostream>
//Manipulators 
#include<iomanip>
using namespace std;
int main(){
    int a=3, b=4, c=5;   // so *setw()is amanipulator.
    cout<<"The value of a is:"<<setw(2)<<a;
    cout<<"\nThe value of b is:"<<setw(3)<<b;
    cout<<"\nThe value of c is:"<<setw(4)<<c;
    return 0;
}