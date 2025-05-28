// This is followed by codehelp by babbar

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    
    //vector initialization
    vector<int> v;
    // another way
    vector<int> a(5,1);
    cout<<"vector a:"<< endl;
    for(int i : a){
        cout<< i << " ";
    }
    cout<< endl;

    // copy of a vector
    vector<int> copy(a);
    cout<< "Copy vector: "<< endl;
    for(int i : copy){
        cout<< i << " ";
    }
    cout<< endl;


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

    /*v.clear dara puro vector clear kora jai. tobe akhane vector khali houai vector
    size zero holeu vector capacity same thake karon jei poriman memory initialize 
    kora hoyeche ta thekei jabe*/
    cout<< "Before vector clear: "<< v.size() << " " <<v.capacity()<< endl;
    v.clear();
    cout<< "After vector clear: "<< v.size()<< " " << v.capacity() <<endl;
    return 0;
}