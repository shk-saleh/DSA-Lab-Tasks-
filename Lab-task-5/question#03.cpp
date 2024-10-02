// Finding last Ocurrence in sorted array using binary search

#include<iostream>
using namespace std;

int lastOccurence(int arr[],int size,int key){

    int start = 0;
    int end = size-1;
    int mid = (start+end)/2;
    int ans = 0;

    while(start <= end){

        if(arr[mid] == key){    //if key find then it return key
            ans = mid;
            start = mid + 1;
        }
        else if(arr[mid] < key){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }

        mid = (start+end)/2;

    }

    return ans;

}

int main(){

    int arr[] = {2,3,4,4,6,6,9};
    int target = 6;
    int size = sizeof(arr)/4;

    cout<<"Last occurence of "<<target<<" is "<<lastOccurence(arr, size, target);
            
}