#include<iostream>
using namespace std;

int main(){
    //Operators in C++
    int a=4,b=5;
    //Arithmetic Operators:
    cout<<"These are arithmetic opertors:"<<endl;
cout<<"The value of a+b:"<<a+b<<endl;
cout<<"The value of a-b:"<<a-b<<endl;
cout<<"The value of a*b:"<<a*b<<endl;
cout<<"The value of a/b:"<<a/b<<endl;
cout<<"The value of a%b:"<<a%b<<endl;
cout<<"The value of a++:"<<a++<<endl;
cout<<"The value of a--:"<<a--<<endl;
cout<<"The value of ++a:"<<++a<<endl;
cout<<"The value of --a:"<<--a<<endl;
cout<<endl;

/*Assignment Opertors: it is used to assign values to variables
int a=3,b=5;
char d='d'*/

//Comparison operator:
cout<<"These are comparison opertors:"<<endl;
cout<<"The value of a==b:"<<(a==b)<<endl;
cout<<"The value of a!=b:"<<(a!=b)<<endl;
cout<<"The value of a<b:"<<(a<b)<<endl;
cout<<"The value of a>b:"<<(a>b)<<endl;
cout<<"The value of a<=b:"<<(a<=b)<<endl;
cout<<"The value of a>=b:"<<(a>=b)<<endl;
cout<<endl;

//Logical operators:
cout<<"These are logical operators:"<<endl;
cout<<"The value of ((a==b)&&(a<b)) logical operator is:"<<((a==b)&&(a<b))<<endl;
cout<<"The value of ((a==b)||(a<b)) logical operator is:"<<((a==b)||(a<b))<<endl;
cout<<"The value of (!(a==b)) logical operator is:"<<(!(a==b))<<endl;





    return 0;
}