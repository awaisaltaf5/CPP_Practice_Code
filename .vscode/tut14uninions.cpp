#include<iostream>
using namespace std;
union employee
{
  int id;
  float salary;
  char fav;

};


int main(){
     union employee awais;
    awais.id=3;
    awais.salary=12000;
    awais.fav='A';
    cout<<"Id: "<<awais.id;
    cout<<"\nCharacter: "<<awais.fav;
    cout<<"\nSalary: "<<awais.salary;
    
    return 0;
}