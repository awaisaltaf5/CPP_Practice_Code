#include<iostream>
using namespace std;
int main(){
    int marks[4]={21,43,78,89};
     
    cout<<"These are simple marks"<<endl;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    

    int mathmarks[4];
    cout<<"These are MAth marks"<<endl;
    mathmarks[0] = 234;
    mathmarks[1] = 33;
    mathmarks[2] = 78;
    mathmarks[3] = 780;
    /*cout<<"Marks:"<<mathmarks[0]<<endl;
    cout<<"Marks:"<<mathmarks[1]<<endl;
    cout<<"Marks:"<<mathmarks[2]<<endl;
    cout<<"Marks:"<<mathmarks[3]<<endl;*/

   /* for(int i=0;i<4;i++){
        cout<<"The value of"<<i<<"is "<<mathmarks[i]<<endl;
    }*/
   /* int i=0;
    while(i<4){
        cout<<"The value of"<<i<<"is "<<mathmarks[i]<<endl;
        i++;
    }*/
    int i=0;
    do{
        cout<<"The value of"<<i<<"is "<<mathmarks[i]<<endl;
        i++;
    }while(i<4);
    return 0;
}