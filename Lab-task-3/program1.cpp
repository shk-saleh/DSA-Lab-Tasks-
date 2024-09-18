#include<iostream>
using namespace std;

class stack{

    private:

    int arr[5];
    int top;

    public:

    stack(){    //constructer for stack
        top = -1;
    }

    bool push(int value){   //adding elements in stack

        if(top<5){

            arr[top++] = value;
            return true;

        }
        else{
            return false;
        }

    }

    bool pop(){     //remove the element from stack

        arr[--top] = 0;
        return true;
    }

    int peek(){     //display peek elements in stack

        return arr[--top];

    }

    
    void clear(){     //remove all element from stack

        if(top>-1){
            top = -1;
            cout<<"Stack is empty!!";
        }else{
            cout<<"Stack is already empty!!";
        }
    }

    bool isEmpty(){     //check for stack ifempty

        if(top>-1){
            return false;
        }else{
            return true;
        }

    }

    ~stack(){    //destructer for stack
        top = -1;
    }

};


int main(){

    stack list; 

    cout<<"Added value to stack " << list.push(5);
    cout<<"\nAdded value to stack " << list.push(10);
    cout<<"\nPeek value is : " << list.peek()<<endl;
    list.clear();
    cout<<"\nStack is empty? : " << list.isEmpty();

}