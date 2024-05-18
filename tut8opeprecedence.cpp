#include<iostream>

using namespace std;
int main(){
    int a=3, b=4;
//int c= a*5+b-45+38; ***this is without opertaors  presedence sequence*****
int c= ((((a*5)+b)-45)+38);
//int c= ((((a*5)+b)-45)+38);** this is with opertaors presedence sequence****



cout<<"The value of c is:"<<c;
return 0;
}