#include<iostream>
using namespace std;

class Queue{

    private:

    string word1,word2,word3,word4,combo;
    int wordInc = 0;

    public:


    void dequeue(string Line){

        for(int i=0; Line[i]!='\0';i++){    // Loop continue to execute until line terminator reached

            if(Line[i] != ' '){      

                if(wordInc == 0){
                    word1 += Line[i];
                } 
                else if(wordInc == 1){
                    word2 += Line[i];
                }  
                else if(wordInc == 2){
                    word3 += Line[i];
                }
                else if(wordInc == 3){
                    word4 += Line[i];
                } 

            }else{                          // if program found space then it move to next word
                wordInc++;
            }

        }

    }


    void displaywords(){

        cout<<"Queue 1 :  "<< word1<<endl;
        cout<<"Queue 2 :  "<< word2<<endl;
        cout<<"Queue 3 :  "<< word3<<endl;
        cout<<"Queue 4 :  "<< word4<<endl;

    }
   
    void enqueue(){

        combo = word1 + " " + word2 + " " + word3 + " " + word4;

        cout<<"Enqueued String : "<<combo;

    }


};


int main(){

    Queue q;

    string Line;

    cout<<"Enter a line : ";
    getline(cin, Line);

    q.dequeue(Line);    // Break the complete line in singlular words
    q.displaywords();   // display the single words
    q.enqueue();        // Again enqueue the line

}