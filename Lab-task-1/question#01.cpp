#include<iostream>
using namespace std;

int main(){


    int n,num,idx;
    bool found = false;
    int* dArr = new int[n];
    
    cout<<"Size of array : ";
    cin>>n;

    for(int i=0;i<n;i++){
        cout<<"Enter element "<<i+1<<" : ";
        cin>>dArr[i];
        cout<<endl;
    }

    cout<<"Which number you want to find?: ";
    cin>>num; 

    for(int i=0;i<5;i++){
        if(num==dArr[i]){
            found = true; 
            idx = i;
            break;   
        }
    }

    if(found){
        cout<<"Number found at "<< idx <<" index.";
    }
    else{
        cout<<"Number not found !!";
    }

}