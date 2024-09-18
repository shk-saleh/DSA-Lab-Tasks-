#include<iostream>
using namespace std;

int main(){

    double* arr = new double[12];
    double min = INT_MAX;
    double max = INT_MIN;
    int maxi,mini;
    double total,avg;

    cout<<"< Total Rainfall for 12 months >"<<endl;
    cout<<endl;

    for(int i=0;i<12;i++){
        cout<<"Enter rainfall for "<<i+1<<" month : ";
        cin>>arr[i]; 
        cout<<endl;
    }

    for(int i=0;i<12;i++){
        
        if(arr[i]>max){
            max=arr[i];
            maxi = i;
        }
        if(arr[i]<min){
            min=arr[i];
            mini = i;
        }

        total+= arr[i];
    }

        avg = total/12;

    
    cout<<"Maximum rainfall occur in "<<maxi<<" month having "<<max<<"mm."<<endl;   
    cout<<"Minimum rainfall occur in "<<mini<<" month having "<<min<<"mm."<<endl;   
    cout<<"Total rainfall of 12 months is :"<<total<<endl;
    cout<<"Average rainfall of 12 months is :"<<avg<<endl;

}