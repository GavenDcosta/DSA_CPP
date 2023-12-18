//stores unique elements 
//eben if you put a no 5 times, it will store it only once
//returns elements in sorted order

#include<iostream>
using namespace std;
#include<set>

int main(){
    set<int> s;


    //it will ignore duplicate values
    s.insert(5);
    s.insert(0);
    s.insert(5);
    s.insert(0);
    s.insert(3);
    s.insert(2);
    s.insert(3);
    s.insert(2);
    s.insert(5);
    s.insert(0);
    s.insert(3);
    s.insert(2);
    s.insert(5);
    s.insert(0);
    s.insert(3);
    s.insert(2);

    for(auto i: s){     //will return in sorted order
        cout<<i<<endl;
    }

    set<int>::iterator it = s.begin();
    it++;

    s.erase(it);

    for(auto i: s){     
        cout<<i<<endl;
    }

    cout<<s.count(5)<<endl;
    cout<<s.count(-3)<<endl;

    set<int>::iterator itr = s.find(3);

    for(auto it = itr; it!=s.end(); it++){
        cout<<*it;
    }

    cout<<endl;


    return 0;
}