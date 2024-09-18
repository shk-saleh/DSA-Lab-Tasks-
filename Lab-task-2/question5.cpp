#include<iostream>
using namespace std;

int main(){

    int arr[3][2] = {{1,2}
                    ,{3,4}
                    ,{5,6}};
    int totalSum,avg,rowno,rowSum=0,colno,colSum=0,hrow,hcol;
    int hRowValue = INT_MIN;
    int hColValue = INT_MIN;

    cout<<"Enter row no to find sum of row : ";
    cin>>rowno;
    cout<<"Enter column no to find sum of column : ";
    cin>>colno;
    cout<<"Select the row to find the highest no : ";
    cin>>hrow;
    cout<<"Select the column to find the highest no : ";
    cin>>hcol;

    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){ 

            totalSum += arr[i][j]; 
    
            if (i == rowno) {
                rowSum += arr[i][j];
            }

            if (j == colno) {
                colSum += arr[i][j];
            }

            if(i == hrow){
                if(arr[i][j]>hRowValue){
                    hRowValue = arr[i][j];
                }
            }

            if(j == hcol){
                if(arr[i][j]>hColValue){
                    hColValue = arr[i][j];
                }
            }

        }
    }

    avg = totalSum/6;

    cout<<"Total of array : "<<totalSum<<endl;
    cout<<"Average of array: "<<avg<<endl;
    cout<<"Sum of elements in row "<<rowno<<" is : "<<rowSum<<endl;
    cout<<"Sum of elements in column "<<colno<<" is : "<<colSum<<endl;
    cout<<"Highest elements in "<<hrow<<" row "<<" is : "<<hRowValue<<endl;
    cout<<"Highest elements in "<<hcol<<" column "<<" is : "<<hColValue<<endl;
   

}