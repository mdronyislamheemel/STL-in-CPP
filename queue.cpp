#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main()
{
    queue<string> q;
    q.push("I love");
    q.push("You");
    q.push("Rony");

    cout<<"First element: "<< q.front()<< endl;
    cout<<"Last element: "<< q.back()<< endl;

    //queue FIFO rules follow kore orthat j age asbe se age jabe
    // tai pop korle front er element age pop hobe
    q.pop();
    cout<< "First element: "<< q.front()<< endl;
    return 0;
}