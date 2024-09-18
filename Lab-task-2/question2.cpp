#include<iostream>
using namespace std;

int main(){

    int x = 10;
    int y = 20;
    int temp;

    int* ptrx = &x;
    int* ptry = &y;

    cout<<"Values before swapping : "<<"a : "<<*ptrx<<", b : "<<*ptry;
    cout<<endl;

    temp = *ptrx;
    *ptrx = *ptry;
    *ptry = temp;

    cout<<"Values after swapping : "<<"a : "<<*ptrx<<", b : "<<*ptry;


    return 0;
    
}