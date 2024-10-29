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


// Merging two doubly linked lists
void mergeLists(Node*& head1, Node*& tail1, Node*& head2, Node*& tail2) {

    // if the both lists are empty
    if (head1 == NULL || head2 == NULL) {  
        head1 = head2;
        tail1 = tail2;
    }
    else {
        tail1->next = head2;   // Link the tail of the first list to the head of the second
        head2->prev = tail1;   // Link back from the head of the second list to the tail of the first
        tail1 = tail2;         // Update the tail to be the tail of the second list
    }

}


int main(){


    Node* head1 = NULL;      // initializing head1
    Node* tail1 = NULL;      // initializing tail1


    insertAtTail(head1, tail1, 10);
    insertAtTail(head1, tail1, 20);
    insertAtTail(head1, tail1, 30);
    insertAtTail(head1, tail1, 40);

    cout<<"First List : "<<endl;
    printList(head1);

    cout<<endl;
    
    Node* head2 = NULL;      // initializing head2
    Node* tail2 = NULL;      // initializing tail2


    insertAtTail(head2, tail2, 50);
    insertAtTail(head2, tail2, 60);
    insertAtTail(head2, tail2, 70);

    cout << "Second List: "<<endl;
    printList(head2);

    cout<<endl;

    // Merging both lists
    mergeLists(head1, tail1, head2, tail2);

    cout << "Merged List: "<<endl;
    printList(head1);

    return 0;


}