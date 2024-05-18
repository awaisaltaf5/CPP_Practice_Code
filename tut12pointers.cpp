#include<iostream>
using namespace std;

int main(){
    // What is a pointer? ----> Data type which holds the address of other data types
    int a=5;
    int* b=&a;
     // & ---> (Address of) Operator
    cout<<"The address of a is "<<b;
    cout<<"\nThe address of a is "<<&a;
    // * ---> (value at) Dereference operator
    cout<<"\nThe value at adress *b is "<<*b;
    // Pointer to pointer
    int** c = &b;
    cout<<"\nThe address of b is "<<&b;
    cout<<"\nThe address of b is "<<c;
    cout<<"\nThe value at c is "<<*c;
    cout<<"\nThe value at address value_at(value_at(c)) is "<<**c<<endl; 





    return 0;

}