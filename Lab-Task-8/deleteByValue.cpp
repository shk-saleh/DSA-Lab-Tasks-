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

    ~Node(){
        if(next != NULL){
            delete next;
            next = NULL;
        }
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
void insertAtPosition(Node* &head,Node* &tail, int data, int position){

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

    // -> case where need to insert at last 
    if(temp -> next == NULL){
        insertAtTail(head,tail, data);
        return;
    }


    // logic for insertion at mid

    temp -> next -> prev = nodeToInsert;
    nodeToInsert -> next = temp -> next;
    nodeToInsert -> prev = temp;
    temp -> next = nodeToInsert;


}


void deleteNode(Node* &head, int value) {

    // if list will empty
    if (head == NULL) {
        return;
    }

    // If the node to delete is head node
    if(head->data == value) {

        Node* temp = head;
        head = head->next;
        head->prev = NULL;
        temp -> next = NULL;

        delete temp;
        return;
    }

    // Search for the node to delete
    Node* curr = head;
    Node* prev = NULL;

    while (curr != NULL && curr->data != value) {
        prev = curr;
        curr = curr->next;    // incremnt the curr
    }


    // If value not found
    if (curr == NULL) {
        cout<<"Value not found!";
        return;
    }
    else{   // If value found

        curr -> prev = NULL;
        prev -> next = curr -> next;
        curr -> next = NULL; 
        
        delete curr;

    }

}


int main(){


    Node* head = NULL;      // initializing head
    Node* tail = NULL;      // initializing tail


    insertAtTail(head, tail, 20);
    insertAtTail(head, tail, 30);
    insertAtTail(head, tail, 40);
    insertAtTail(head, tail, 50);
 
    // insertAtPosition(head,tail, 25,2);

    printList(head);

    cout<<endl;

    deleteNode(head, 50);

    printList(head);


}