#include<iostream>
#include<vector>
using namespace std;


void bubble_sort(vector<int> &vec){

    bool is_Sorted = true;

    for(int i=1; i<vec.size(); i++){
         
        for(int j=0; j<vec.size() - 1; j++){    // this loop will be do comparisons

            if(vec[j] > vec[j+1]){
                swap(vec[j],vec[j+1]);
                is_Sorted = false;
            }

        }

    }

    if(is_Sorted){
        cout << "Vector is already sorted" << endl;
    }

}   


int main(){


    vector<int> vec(9);

    for(int i=0;i<9;i++){
        cin>>vec[i];
    }

    bubble_sort(vec);

    for(int i: vec){
        cout<<i<<" ";
    }
}
