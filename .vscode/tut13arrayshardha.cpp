#include<iostream>
#include<climits>
using namespace std;
/*int main(){
    int arr[4]={1,4,6,8};
    for(int i=0;i<4;i++){
        cout<<arr[i];
    }
}*/

//This is a new Program
/*int main(){
    int n;
    cout<<"Enter the numbers:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
    
}*/

// This is new program
int main(){
    int n;
    cout<<"Enter the numbers:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxNo=INT_MIN;
    int minNo=INT_MAX;
    for(int i=0;i<n;i++){
        maxNo=max(maxNo,arr[i]);
         minNo=min(minNo,arr[i]);

        /*if(arr[i]>maxNo)
        maxNo=arr[i];
        if(arr[i]<minNo)
        minNo=arr[i];*/
       

    }
     cout<<maxNo<<" "<<minNo;
    
    return 0;
    }


