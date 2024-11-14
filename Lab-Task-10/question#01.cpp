#include<iostream>
using namespace std;


int partition(int *arr, int s, int e){

   int pivot = arr[s];
   int count = 0;

   for(int i=s+1; i<=e; i++){
        if(arr[i] >= pivot){
            count++;
        }
    }

    // get pivot index
    int pivotIndex = s+count;
    swap(arr[pivotIndex],arr[s]);

    // placing pivot at right position
    int i = s, j = e;

    while(i < pivotIndex && j > pivotIndex){

        while(arr[i] >= pivot){
            i++;
        }

        while(arr[j] < pivot){
            j--;
        }

        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i++],arr[j--]);
        }       

    }

    return pivotIndex;    

}


void quick_sort(int *arr, int s, int e, int n){

    // base case
    if(s>e)
        return;
        

    int p = partition(arr, s, e);

    // calls for left part sorting
    quick_sort(arr, s, p-1,n);

    // calls for right part sorting
    quick_sort(arr, p+1, e,n);

}


int main(){

    int arr[] = {2,5,1,4,8,9,7,6};
    int size = sizeof(arr)/sizeof(arr[0]);

    quick_sort(arr, 0, size-1, size);

    for(int i: arr){
        cout<<i<<" ";
    }

}