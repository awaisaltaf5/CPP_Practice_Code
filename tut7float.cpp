#include<iostream>

using namespace std;
int main(){
    // float, double and long double literals:
    float d= 34.5F;
    long double e= 34.5L;
    
    cout<<"The size of 34.5 is "<<sizeof(34.5)<<endl;
    cout<<"The size of 34.5f is "<<sizeof(34.5f)<<endl;
    cout<<"The size of 34.5F is "<<sizeof(34.5F)<<endl;
    cout<<"The size of 34.5l is "<<sizeof(34.5l)<<endl;
    cout<<"The size of 34.5L is "<<sizeof(34.5L)<<endl;
return 0;
}