#include<iostream>
#include<math.h>
using namespace std;


int Addition(int a, int b){
    return a+b;
}

int Subtraction(int a, int b){
    return a-b;
}

int Multiplication(int a, int b){
    return a*b;
}

int Division(int a, int b){
    return a/b;
}

int Power(int a, int b){
    return pow(a,b);
}


void Menu(){

    char choice,option;
    int num1,num2;


    do{

        cout<<"Operation : "<<endl;
        cout<<"A. Addition"<<endl;
        cout<<"B. Subtraction"<<endl;
        cout<<"C. Division"<<endl;
        cout<<"D. Multiplication"<<endl;
        cout<<"E. Power"<<endl;
        cout<<endl;
        cout<<"Choose your option : ";
        cin>>option;


        switch (option)
        {
            case 'A':

            cout<<"Enter num 1 : ";
            cin>>num1;
            cout<<"Enter num 2 : ";
            cin>>num2;

            cout<<"Result : "<<Addition(num1,num2);

            break;

            case 'B':

            cout<<"Enter num 1 : ";
            cin>>num1;
            cout<<"Enter num 2 : ";
            cin>>num2;

            cout<<"Result : "<<Subtraction(num1,num2);

            break;

            case 'C':

            cout<<"Enter num 1 : ";
            cin>>num1;
            cout<<"Enter num 2 : ";
            cin>>num2;

            cout<<"Result : "<<Division(num1,num2);

            break;

            case 'D':

            cout<<"Enter num 1 : ";
            cin>>num1;
            cout<<"Enter num 2 : ";
            cin>>num2;
            
            cout<<"Result : "<<Multiplication(num1,num2);

            break;

            case 'E':

            cout<<"Enter num : ";
            cin>>num1;
            cout<<"Enter power: ";
            cin>>num2;

            cout<<"Result : "<<Power(num1,num2);

            break;
            
            default:
            break;
        }

        cout<<"\nHave you done your calculations? ";
        cin>>choice;

    }while(choice == 'n');

}


int main(){

    cout<<"<<< Simple Calulator >>>"<<endl;

    Menu();

}
