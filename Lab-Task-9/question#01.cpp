#include <iostream>
#include <vector>
using namespace std;


void insertion_sort(vector<int> &vec){

    for (int i = 1; i < vec.size(); i++){
        
        int key = vec[i];
        int j = i - 1;

        while (key > vec[j] && j >= 0){
            vec[j + 1] = vec[j];
            --j;
        }

        vec[j + 1] = key;
    
        cout<<endl;
        cout<<"Updated Array : ";
        for(int i=0;i<vec.size();i++){
            cout<<vec[i] << " ";
        }
        cout<<endl;
    
    }
}

int main(){

    vector<int> vec(5);

    for(int i=0; i<5; i++){
        cin>>vec[i];
    }

    insertion_sort(vec);


    return 0;
}