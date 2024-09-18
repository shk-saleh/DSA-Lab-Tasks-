#include<iostream>
using namespace std;

int main(){

    int arr[10];
    int sum;

    for(int i=0;i<10;i++){
           cout<<"Enter element "<<i+1<<" : ";
           cin>>arr[i]; 
           cout<<endl;
    }

    for(int i=0;i<10;i++){
        if(arr[i]%2!=0){
           sum+=arr[i];
        }
    }


    cout<<"Sum of array: "<<sum<<endl;

}