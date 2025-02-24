#include<iostream>
#include<vector>
#include<list>
using namespace std;
int main()
{
    list<int> lst ;//= {1,2,3,4};

    lst.push_back(1);
    lst.push_back(2);
    lst.push_front(3);
    lst.push_front(5);

    for(int val: lst){
        cout <<val <<" ";
    }
    cout << endl;

    return 0;
}