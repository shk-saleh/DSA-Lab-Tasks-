#include<iostream>
using namespace std;

int main(){

    int age[10];
    int lAge = age[0];

    for(int i=0;i<10;i++){
        cout<<"Enter student age: ";
        cin>>age[i];
    }
    
    for(int i=0;i<10;i++){
        if(lAge<age[i]){
            lAge = age[i];
        }
    }

    cout<<"Largest Age is : "<<lAge;

    return 0;

}