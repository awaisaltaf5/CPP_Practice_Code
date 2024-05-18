#include<iostream>
using namespace std;
int main(){
	int num;
	int challan;
	string name;
	
	
	cout<<"Enter your card number here"<<endl;
	cin>>num;
	cout<<"Enter your Name:"<<endl;
	cin>>name;
	
	if(num==223) {
		cout<<" Welcome "<<name<<"!you may go from Gate 1!"<<endl;
		
	}
	else if((num>223) || (num<223)){
		cout<<"Your admit card is Incorrect!"<<endl;
		cout<<"Please enter your Paid Challan Number:"<<endl;
		cin>>challan;
		if(challan==145){
			cout<<"You may go from Gate 1!"<<endl;
		}
		else if((challan>145) ||(challan<145))
		{ 
		cout<<"Your Challan Number is Incorrect!"<<endl;
		cout<<"You should contact with Admission Office."<<endl;
		}
	}
	return 0;
}
