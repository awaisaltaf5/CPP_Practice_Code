#include<iostream>
using namespace std;

int main(){
    enum meal{breakfast, lunch, dinner};
    meal m1=breakfast;
    meal m2=lunch;
    meal m3=dinner;

    cout<<breakfast;
    cout<<"\n"<<lunch;
    cout<<"\n"<<dinner;

    cout<<"\n"<<m1<<endl;
    cout<<m2<<endl;
    cout<<m3;
    cout<<"\n"(m1==0);
    
    return 0;
}