#include<iostream>
using namespace std;
 typedef struct employee
{
  int id;
  float salary;
  char fav;

} ep;


int main(){ 
    //struct employee awais;
    ep awais;
    awais.id=45;
    awais.salary=120000;
    awais.fav='A';
    cout<<"Id number:"<<awais.id;
    cout<<"\nSalary:"<<awais.salary;
    cout<<"\nCharacter:"<<awais.fav;

    return 0;
}