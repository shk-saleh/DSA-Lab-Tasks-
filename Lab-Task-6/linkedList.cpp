#include<iostream>
using namespace std;


// node class to represent the node of the linked list

class Node{

    public:

    int data;
    Node *next;

    Node(){
        data = 0;
        next = NULL;
    }

    Node(int data){
        this -> data = data;    // store data coming from the constructor
        this -> next = NULL;
    }

};


// create class to add link list elements 

class LinkList{

    Node *head;

    public:

    LinkList(){
        head = NULL;    // initializing link list
    }

    // function for adding element in link list 

    void insertAtHead(int data){

        Node *newNode = new Node(data);


        if(head == NULL){
            head = newNode;
        }
        else{

            Node *temp = head;

            while(temp->next != NULL){
            temp = temp->next;
            }
            
           temp->next = newNode;   
        
        }

    }

    // for printing the list

    void print(){

        Node *list = head;

        // print until list got empty

        if(head == NULL){
            cout<<"List is empty!!";
            return;
        }

        // tranvers the list

        while(list !=NULL){
            cout<<list->data<<" ";
            list = list -> next;
        }

    }

};


int main(){

    LinkList list;

    list.insertAtHead(1);
    list.insertAtHead(2);
    list.insertAtHead(3);

    cout<<"Elements in list : "<<endl;
    list.print();

    return 0;
}