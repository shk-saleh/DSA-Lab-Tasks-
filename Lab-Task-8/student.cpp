#include<iostream>
using namespace std;


class Node{

    public:

    string name;
    int sap, sms;
    Node* next;
    Node* prev;

    Node(int sap, int sms, string name){

        this -> sap = sap;
        this -> name = name;
        this -> sms = sms;
        this -> next = NULL;
        this -> prev = NULL;

    }

    ~Node(){    // to free extra space from heap
        if(next != NULL){
            delete next;
            next = NULL;
        }
    }


};


// Printing list
void printList(Node* head){

    Node* temp = head;

    while(temp != NULL){

        cout<<"\nSAP id: " <<temp -> sap <<endl;
        cout<<"Name: " <<temp -> name <<endl;
        cout<<"Semester: " <<temp -> sms <<endl;
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
void insertAtHead(Node* &head, Node* &tail, int sap, int sms, string name){
    
    Node* temp = new Node(sap,sms,name);

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
void insertAtTail(Node* &head, Node* &tail, int sap, int sms, string name){
    
    Node* temp = new Node(sap,sms,name);

    if(tail == NULL){

        head = tail = temp;

    }
    else{

        temp -> prev = tail;
        tail -> next = temp;
        tail = temp;

    }

}

// insertion at middle
void insertAtPosition(Node* &head,Node* &tail, int sap, int sms, string name, int position){

    // if mid will head
    if(position == 1){
        insertAtHead(head,tail,sap,sms,name);
        return;     // exit the function
    }

    Node* temp = head;
    Node* nodeToInsert = new Node(sap,sms,name);
    int count = 1;

    while(count < position-1){

        temp = temp -> next;    // point to one previous node of that position
        count++;

    }

    // -> case where need to insert at last 
    if(temp -> next == NULL){
        insertAtTail(head,tail,sap,sms,name);
        return;
    }


    // logic for insertion at mid

    temp -> next -> prev = nodeToInsert;
    nodeToInsert -> next = temp -> next;
    nodeToInsert -> prev = temp;
    temp -> next = nodeToInsert;


}


void deleteNode(Node* &head, int sap) { //deletion through sap id

    // if list will empty
    if (head == NULL) {
        return;
    }

    // If the node to delete is head node
    if(head->sap == sap) {

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

    while (curr != NULL && curr->sap != sap) {
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


    insertAtTail(head, tail, 56029, 3, "Muhammad Saleh");
    insertAtTail(head, tail, 56193, 3, "Muhammad Abdullah");
    insertAtTail(head, tail, 55123, 3, "Muhammad Anas");

    printList(head);

    insertAtPosition(head, tail, 56200, 4 ,"Muhammad Hamza", 4);

    cout<<"\n------------------"<<endl;
    cout<<"After Adding  : "<<endl;
   
    printList(head);


}