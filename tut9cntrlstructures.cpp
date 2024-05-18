#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Tell me your age:";
    cin>> age;
    if(age==18){
        cout<<"If you want to enjoy party then you must have some tests.";
    }
    else if(age<18){
        cout<<"You are under age, Sorry!";

    }
else {
    cout<<"Welcome to our Party!";

}



}