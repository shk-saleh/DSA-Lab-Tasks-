#include<iostream>
using namespace std;


class Node{

    public:

    int data;
    Node* next;
    Node* prev;

    Node(int data){

        this -> data = data;
        this -> next = NULL;
        this -> prev = NULL;

    }


};


// Printing list
void printList(Node* head){

    Node* temp = head;
    int count = 1;

    while(temp != NULL){

        cout<< temp -> data << " ";
        temp = temp -> next;

    }

}

// Length of list
int LengthOfList(Node* head){

    Node* temp = head;
    int count = 1;
    int length = 0;

    while(temp != NULL){
        length++;
        temp = temp -> next;

    }

    return length;

}

// insertion at head
void insertAtHead(Node* &head, Node* &tail, int data){
    
    Node* temp = new Node(data);

    if(head == NULL){

        head = tail = temp;

    }
    else{

        temp -> next = head;
        head -> prev = temp;
        head = temp;

    }

}

//  insertion at tail
void insertAtTail(Node* &head, Node* &tail, int data){
    
    Node* temp = new Node(data);

    if(tail == NULL){

        head = tail = temp;

    }
    else{

        Node* temp = new Node(data);
        temp -> prev = tail;
        tail -> next = temp;
        tail = temp;

    }

}

// insertion at middle
void insertAtMiddle(Node* &head,Node* &tail, int data, int position){

    // if mid will head
    if(position == 1){
        insertAtHead(head,tail,data);
        return;     // exit the function
    }

    Node* temp = head;
    Node* nodeToInsert = new Node(data);
    int count = 1;

    while(count < position-1){

        temp = temp -> next;    // point to one previous node of that position
        count++;

    }

    // logic for insertion at mid

    temp -> next -> prev = nodeToInsert;
    nodeToInsert -> next = temp -> next;
    nodeToInsert -> prev = temp;
    temp -> next = nodeToInsert;


}


int main(){


    Node* head = NULL;      // initializing head
    Node* tail = NULL;      // initializing tail


    insertAtTail(head, tail, 20);
    insertAtTail(head, tail, 30);
    insertAtTail(head, tail, 40);
    insertAtTail(head, tail, 50);

    int len = LengthOfList(head);
    int mid = len/2;
 
    insertAtMiddle(head,tail, 25,mid);

    printList(head);


}