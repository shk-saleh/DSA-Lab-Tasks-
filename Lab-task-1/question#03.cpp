#include<iostream>
using namespace std;

int main(){

    int a,b,c;

    int* arr1 = new int[a];
    int* arr2 = new int[b];
    int* arr3 = new int[c];
    
    cout<<"How many elements you want to store in array 1? : ";
    cin>>a;

    for(int i=0;i<a;i++){
        cout<<"Enter element "<<i<<" :";
        cin>>arr1[i];
        cout<<endl;
    }

    cout<<"\nHow many elements you want to store in array 2? : ";
    cin>>b;

    for(int i=0;i<b;i++){
        cout<<"Enter element "<<i<<" :";
        cin>>arr2[i];
        cout<<endl;
    }

    cout<<"\nHow many elements you want to store in array 3? : ";
    cin>>c;

    for(int i=0;i<c;i++){
        cout<<"Enter element "<<i<<" :";
        cin>>arr3[i];
        cout<<endl;
    }
    
    int* combo = new int[a+b+c];
    
    // Transferring array1 elements to combo

    for(int i=0;i<a;i++){
        combo[i] = arr1[i];
    }

    // Transferring array2 elements to combo

    for(int i=0;i<b;i++){
        combo[i+a] = arr2[i];
    }

    // Transferring array3 elements to combo

     for(int i=0;i<c;i++){
        combo[i+a+b] = arr3[i];
    }


    // Display the combo array 

    for(int i=0;i<a+b+c;i++){
       cout<<"Elements in combo array : "<<combo[i]<<endl;
    }
    

    return 0;

}