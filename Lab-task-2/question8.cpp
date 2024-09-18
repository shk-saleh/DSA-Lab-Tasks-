#include<iostream>
using namespace std;

int main(){

    int x;
    int y;

    int* ptrA = &x;
    int* ptrB = &y;

    cout<<"Enter the value of x : ";
    cin>>x;
    cout<<"Enter the value of y : ";
    cin>>y;

    cout<<endl;
    
    cout<<"Value of x : "<<x<<endl;
    cout<<"Value of y : "<<y;

    return 0;
    
}