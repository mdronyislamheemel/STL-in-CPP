#include<iostream>
#include<vector>
#include<list>
using namespace std;
int main()
{
    list<int> lst ;//= {1,2,3,4};

    /*list vector er motoi kaj kore tobe vector hocche dynamic array er moto kaj kore
    r list doubly queue er moto kaj kore, orthat main parthokko hocche vector ba deque 
    er moddhe array er moto random access possible but list er moddhe random access possible
    na. jamon vertor[2] ba deque[3] possible but list[1] not possible   */

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
/*list er moto motoi deque = Double Ended Queue, atau list er moto push
pop, front, back sob kaj e kore*/