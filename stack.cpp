#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main()
{
    stack<string> s;
    s.push("I love");
    s.push("you");
    s.push("Rony");

    cout<< s.top()<< endl;

    s.pop();
    cout<< s.top()<< endl;

    cout<< "size of the stack: "<< s.size();
    return 0;
}