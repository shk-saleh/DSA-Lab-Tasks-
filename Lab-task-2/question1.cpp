#include<iostream>
using namespace std;

int main(){

    int arr[2][2];
    int sum;
    int mul;
    int avg;

    cout<<"Array Elements : "<<endl;

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
           cout<<"Enter element "<<" : ";
           cin>>arr[i][j]; 
           cout<<endl;
        }
    }

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
           sum+=arr[i][j];
           mul*=arr[i][j];
        }
    }

    avg = sum/4;

    cout<<"Sum of array: "<<sum<<endl;
    cout<<"Multiplication of array: "<<mul<<endl;
    cout<<"Average of array: "<<avg<<endl;

}