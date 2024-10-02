#include<iostream>
using namespace std;

int findIndex(int arr[],int size,int key){

    int start = 0;
    int end = size-1;
    int mid = (start + end)/2;

    while(start <= end){

        if(arr[mid] == key){    //if key find then it return key
            return mid;
        }

        if(arr[mid]<key){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        
        mid = (start + end)/2;

    }

    return -1;

}

int main(){

    int arr[] = {2,3,4,6,8,12,18,20};

    if(findIndex(arr,8,12) == -1){
        cout<<"Element not found !!";
    }
    else{
        cout<<"Element found at index: "<<findIndex(arr,8,12);
    }
        


}