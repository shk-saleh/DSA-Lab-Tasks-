#include<iostream>
#include<vector>
using namespace std;

int main()
{

    vector<int> vec = {4,2,3,1,0,6};
    int size = vec.size();


    for(int i=0; i<size-1; i++){

        int min = i;

        for(int j=i+1; j<size; j++){

            if(vec[min] < vec[j])
                min = j;

        }

        swap(vec[i],vec[min]);

        cout<<"Phase " <<i+1<<": ";
        for (int i = 0; i < size; i++)
        {
            cout<<vec[i]<<" ";
        }
        cout<<endl;

        
    }


}