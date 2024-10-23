#include<iostream>
using namespace std;

struct Node
{
    /* data */
    int data;
    Node* next;
};

class Queue{

private:

    Node *front, *rear;
    int max_size, current_size;

public:

    Queue(){
        front = rear = NULL;
        current_size = 0;
    }

    Queue(int max_size){
        this->max_size = max_size;
    }

    bool isEmpty()
    {
        if(front == nullptr){
            return true;
        }
        return false;
    }

    void Enqueue(int data){

        Node *new_node = new Node;
        new_node->data = data;
        new_node->next = NULL;

        
        if(current_size == max_size){
            cout << "Queue is full now! "<<data<<" can't be added in queue."<< endl;
            return;
        }

        if(front == NULL){
            front = rear = new_node;
            current_size++;
        }
        else{
            rear -> next = new_node;
            rear = new_node;
            current_size++;
        }


    }

    void dequeue(){

        Node *temp;

        if(front == NULL){
            cout<<"Queue is Empty";
        }
        else{
            temp = front;
            front = front -> next;
            delete temp;
        }

    }

    // clearing the queue
    void clear(){

        while(front != nullptr){
            dequeue();
        }

    }


    // Display the queue elements 

    void Display(){

        Node *temp;
        temp = front;

        while(temp != NULL){
            cout<<temp->data<<" ";
            temp = temp -> next;
        }
     
        if(front == nullptr){   // if front is null or queue is empty then it print this
            cout<<"Queue get empty!"<<endl;
        }else{
            cout<<endl;
            cout<<current_size<<" Elements pushed in queue"<<endl;
            cout<<endl;
        }    
    
    }

};

int main(){


    Queue q(3);

    q.Enqueue(10);
    q.Enqueue(20);
    q.Enqueue(30);
    q.Enqueue(30);

    q.Display();

}
