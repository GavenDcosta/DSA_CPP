#include<iostream>
using namespace std;
#include<queue>

int main(){
    queue<string> q;

    q.push("Gaven");
    q.push("Merwin");
    q.push("Aarol");
    q.push("Sahil");
    q.push("Leander");

    cout<<q.size()<<endl;

    cout<< q.front()<<endl;
    q.pop();
    cout<< q.front()<<endl;
    cout<< q.back()<<endl;

    cout<< q.size()<<endl;
    cout<< q.empty()<<endl;
    return 0;
}