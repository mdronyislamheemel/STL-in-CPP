//set er moddhe sob element unique hote hoi
// akta set er moddhe 5 bar 5 dileu akbar e nibe
// r always sorting akare data entry hoi
// r data modification kora somvob na, hoi data entry kora jai nahoi delete kore jai

#include<iostream>
#include<vector>
#include<set>
using namespace std;
int main()
{
    set<int> s;
    s.insert(5);
    s.insert(6);
    s.insert(3);
    s.insert(8);
    s.insert(8);
    s.insert(5);
    for(auto i: s){
        cout<< i << " ";
    }
    cout<<endl;
     
    s.erase(s.begin());
    for(auto i: s){
        cout<< i << " ";
    }
    cout<<endl;

    s.erase(s.begin());
    for(auto i: s){
        cout<< i << " ";
    }
    return 0;
}