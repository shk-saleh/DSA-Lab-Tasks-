#include<iostream>
using namespace std;

class stack{

    private:

    int arrsize;
    char* arr;
    int top;

    public:

    stack(int size){    //constructer for stack
        arrsize = size;
        top = -1;
        arr = new char[arrsize];
    }

    void push(char pushWord){   //adding elements in stack

        if(top<arrsize-1){

            arr[++top] = pushWord;
            cout<<arr[top];

        }
        else{
            cout<<"Stack got Overflow!!";
        }

    }


    char pop(){     //pop out elements from stack

        if(top == -1){
            cout<<"Stack is empty!!";
        }else{
            return arr[top--];
        }
        
        return -1;

    }

    ~stack(){    //destructer for stack
        top = -1;
        delete[] arr;
    }

};


int main(){

    stack word(5); 

    word.push('S');
    word.push('A');
    word.push('L');
    word.push('E');
    word.push('H');
    cout<<endl;
    cout<<word.pop();
    cout<<word.pop();
    cout<<word.pop();
    cout<<word.pop();
    cout<<word.pop();

    // cout<<"Peek word : "<<word.pop()<<endl;

}