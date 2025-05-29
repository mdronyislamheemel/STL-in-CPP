#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main()
{
    //max heap orthat ata automatically greater value pop korbe
    priority_queue<int> maxi;

    //min heap create
    priority_queue<int, vector<int>, greater<int>> mini;

    maxi.push(3);    
    maxi.push(2);    
    maxi.push(1);    
    maxi.push(5);
    cout<< maxi.size()<< endl;

    int size = maxi.size();
    for(int i =0; i< size; i++){
        cout<< maxi.top()<< " ";
        maxi.pop();
    }cout<< endl;

    mini.push(5);    
    mini.push(2);    
    mini.push(0);    
    mini.push(3);
    mini.push(6);
    int siz = mini.size();
    for(int i =0; i< siz; i++){
        cout<< mini.top()<< " ";
        mini.pop();
    }cout<< endl;

    return 0;
}