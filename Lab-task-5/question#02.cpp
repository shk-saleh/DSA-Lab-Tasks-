// Finding first Ocurrence in sorted array using binary search

#include<iostream>
using namespace std;

int firstOccurence(int arr[],int size,int key){

    int start = 0;
    int end = size-1;
    int mid = (start+end)/2;
    int ans = 0;

    while(start <= end){

        if(arr[mid] == key){    //if key find then it return key
            ans = mid;
            end = mid - 1;
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

    int arr[] = {2,3,4,4,6,8,9};
    int target = 4;
    int size = sizeof(arr)/sizeof(arr[0]);

    cout<<"First occurence of "<<target<<" is "<<firstOccurence(arr, size, target);
            
}