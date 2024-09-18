#include<iostream>
#include<stack>
using namespace std;

int main(){

    stack<string> list;

    list.push("Hello");
    list.push("World");
    list.pop();
    cout<<list.top();

}