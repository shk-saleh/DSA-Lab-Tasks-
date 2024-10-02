#include<iostream>
using namespace std;

class Queue{

    private:

    int n,rear,front;
    int* queueArr = new int[n];


    public:

    Queue(){
        n = 5;
        front = -1;
        rear = -1;
    }

    void enque(int value){

        if(rear == n - 1){
            cout<<"Queue is full!!"<<endl;
        }
        else{
            rear++;
            queueArr[rear] = value;
        }

    }

    int deque(){

        if(front != n-1){ 
           front++;
           return queueArr[front];
        }else{
            cout<<"Queue is over!!";
        }

        return -1;

    }

    bool isEmpty(){
        if(front == n-1){
            return true;
        }else{
            return false;
        }
    }

};


int main(){

    Queue q;

    q.enque(1);
    q.enque(2);
    q.enque(3);
    q.enque(4);
    q.enque(5);
    cout<<"NOW : "<<q.deque()<<endl;
    cout<<"NOW : "<<q.deque()<<endl;
    cout<<"NOW : "<<q.deque()<<endl;
    // cout<<"NOW : "<<q.deque()<<endl;
    cout<<"NOW : "<<q.deque()<<endl;

}