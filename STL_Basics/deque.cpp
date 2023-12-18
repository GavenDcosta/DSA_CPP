#include<iostream>
using namespace std;
#include<deque>

int main(){
    deque<int> d;
    d.push_back(1);
    d.push_front(2);
    
    for(int i: d){
        cout<<i<<" ";
    }

    cout<<endl;

    d.pop_back();

    for(int i: d){
        cout<<i<<" ";
    }

    d.push_back(10);
    d.push_front(22);
    d.push_back(15);
    d.push_front(24);

    cout<<endl;

    cout<<d.at(1)<<endl;
    cout<<d.front()<<endl;
    cout<<d.back()<<endl;

    cout<<d.empty()<<endl;

    cout<<d.size()<<endl;

    d.erase(d.begin(), d.begin()+1);

    cout<<d.size()<<endl;

    return 0;
}