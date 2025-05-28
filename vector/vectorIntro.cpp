#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    cout<< "Vector capacity -> "<< v.capacity()<< endl;

    v.push_back(1);
    cout<< "Vector capacity -> "<< v.capacity()<< endl;

    v.push_back(2);
    cout<< "Vector capacity -> "<< v.capacity()<< endl;

    v.push_back(3);
    cout<< "Vector capacity -> "<< v.capacity()<< endl;
    cout<< "Vector size -> "<< v.size()<< endl;
    
    cout<< "Element of the index -> "<< v.at(2)<<endl;

    cout<< "Front -> "<< v.front()<< endl;
    cout<< "Back -> "<< v.back()<< endl;

    cout<< "Before pop_back:"<<endl;
    for(int i :v){
        cout<< i <<" ";
    }
    cout<< endl;
    
    //delete a element from the back
    v.pop_back();

    cout<< "After pop back:"<< endl;
    for(int i :v){
        cout<< i <<" ";
    }
    cout<< endl;
    return 0;
}