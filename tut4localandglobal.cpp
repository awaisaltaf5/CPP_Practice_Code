#include<iostream>
using namespace std;
int glo=6;// this is global variable.

void sum(){
      int a;
      cout<<glo;
}
int main(){
      
   //int a=2;
   //int b=3;
   int glo=9;
   glo=78;
   int a=2,b=3;
   float pi=3.14;
   char c='A';
   bool d= false;
   sum();
   cout<<glo;

   
   
   //cout<<"The value of a is:"<<a<<".\nThe value of b is:"<<b<<".\nThe value of pi is:"<<pi<<".\nThe value of c is:"<<c<<".\nThe value d is:"<<d;
   return 0;

}
