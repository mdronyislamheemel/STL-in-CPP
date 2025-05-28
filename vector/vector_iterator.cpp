#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> vec ={1, 2, 3,4, 5};

    // itarator
    vector<int> ::iterator it;
    for(it = vec.begin(); it != vec.end(); it++){
        cout<< *(it)<<" ";

    }
    cout << endl;

    // reverse iterator
    vector<int> ::reverse_iterator rit; 
    for(rit = vec.rbegin(); rit != vec.rend(); rit++){
        cout<< *(rit)<<" ";

    }
    cout << endl;

// akhane iterator/reverse_iterator declare na koreu for looper moddhe rit er samne just "auto" likhlei hoi
    return 0;
}