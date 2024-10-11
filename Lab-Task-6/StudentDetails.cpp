#include<iostream>
using namespace std;


// Student class to represent the node of the linked list

class Student{

    public:

    int sapId;
    string name;
    Student *next;


    Student(string name, int sapId){
        this -> name = name;    // store data coming from the constructor
        this -> sapId = sapId;    // store data coming from the constructor
        this -> next = NULL;
    }

};


// create class to add link list elements 

class LinkList{

    Student *head;

    public:

    LinkList(){
        head = NULL;    // initializing link list
    }

    // function for adding element in link list 

    void insertAtHead(string name, int sapId){

        Student *newNode = new Student(name, sapId);


        if(head == NULL){
            head = newNode;
        }
        else{

            Student *temp = head;

            while(temp->next != NULL){
            temp = temp->next;
            }
            
           temp->next = newNode;   
        
        }

    }

    // for printing the list

    void print(){

        Student *list = head;

        // print until list got empty

        if(head == NULL){
            cout<<"List is empty!!";
            return;
        }

        // tranvers the list

        while(list !=NULL){
            cout<<"Student Name: "<<list -> name<<endl;
            cout<<"Student SapID: "<<list -> sapId<<endl;
            cout<<endl;
            list = list -> next;
        }

    }

    // Function to delete student at a specific index
    
    void deleteStudent(int index) {

        if (head == NULL) {
            cout << "List is empty. Cannot delete." << endl;
            return;
        }

        Student *temp = head;
        Student *prev = NULL;

        // If head needs to be removed
        if (index == 0) {
            head = temp->next;
            delete temp;
            cout << "Student at index 0 deleted successfully." << endl;
            return;
        }

        // Find the key to be deleted
        for (int i = 0; i < index; i++) {
            prev = temp;
            temp = temp->next;
        }

        // If the key is not present
        if (temp == NULL) {
            cout << "Index out of range. Cannot delete." << endl;
            return;
        }

        // Remove the node
        prev->next = temp->next;
        delete temp;
        cout << "Student at index " << index << " deleted successfully." << endl;
    
    }

};



int main(){

    LinkList list;

    int stdCount=0;
    string name;
    int sapId;
    char choice;
    int idx;

    cout<<"How many students you want to add? ";
    cin>>stdCount;


    for(int i=1; i<=stdCount; i++){

        cin.ignore();
        cout<<"Enter Student name: ";
        getline(cin,name);

        cout<<"Enter Student sapID: ";
        cin>>sapId;

        list.insertAtHead(name, sapId);

    }

    
    cout<<"\nDetails of Students: ";
    cout<<"----------------------------\n";
    list.print();


    cout<<"\n Do you want to delete any student? ";
    cin>>choice;

    if(choice == 'Y' || choice == 'y'){
        cout<<"Enter the index of student : ";
        cin>>idx;
        list.deleteStudent(idx);
        list.print();
    }
    else if(choice == 'N' || choice == 'n'){
        cout<<"Program executed!!";
    }
    else{
        cout<<"Wrong Selection! Try again..";
    }

    return 0;
}