#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> vec;

    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    vec.emplace_back(6);

    /*push_back charau amra initialy vector create korte pari
    vector<int> vec = {1,2,3,4,5,6}
    
    abar mone kori amra akta same value diye akta nirdisto index er vector create korte chai
    vector<int> vec(5,2)  tahole vector ta hobe {2,2,2,2,2} arokom
    
    abar akta vector arekta vector k copy korte chaile
    vector <int> vec2(vec1)*/

    vec.pop_back();

    for(int val :vec){
        cout << val << " ";
    }
    cout << endl;

    cout << "val at index 2 = " << vec[2] << " or " << vec.at(2) << endl;
    cout << "val at first index = " << vec.front() << endl;
    cout << "val at last index = " << vec.back() << endl;
    vec.erase(vec.begin());
    // erase at a particular index
    vec.erase(vec.begin() + 2);
    for(int val :vec){
        cout << val << " ";
    }
    cout << endl;
    cout << vec.size()<< endl;
    cout << vec.capacity()<< endl;
    return 0;
    
}