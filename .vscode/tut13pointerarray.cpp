#include<iostream>
using namespace std;
int main(){
int marks[4]={60,34,56,78};
int* p=marks;
cout<<*(p)<<endl;
cout<<*(++p)<<endl;
cout<<*(++p)<<endl;
cout<<*(++p);
//cout<<"The value *p is :"<<*p<<endl;
//cout<<"The value *(p+1) is :"<<*(++p)<<endl;
//cout<<"The value *(p+2) is :"<<*(++p)<<endl;
//cout<<"The value *(p+3) is :"<<*(++p)<<endl;
    return 0;

}
