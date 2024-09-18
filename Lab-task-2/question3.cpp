#include<iostream>
using namespace std;

int main(){

    int* arr = new int[10];
    int small = INT_MAX;
    int large = INT_MIN;

    cout<<"Array Elements : "<<endl;

    for(int i=0;i<10;i++){
        cout<<"Enter element "<<i+1<<" : ";
        cin>>arr[i]; 
        cout<<endl;
    }

    for(int i=0;i<10;i++){
        if(arr[i]>large){
            large=arr[i];
        }
        if(arr[i]<small){
            small=arr[i];
        }
    }


    cout<<"Largest number of array :"<<large<<endl;
    cout<<"Smallest number of array: "<<small<<endl;

}