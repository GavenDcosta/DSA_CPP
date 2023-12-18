#include<iostream>
using namespace std;
#include<stack>

int main(){
    stack<string> s;
    s.push("Gaven");
    s.push("Merwin");
    s.push("Aarol");
    s.push("Sahil");
    s.push("Leander");

    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;

    cout<<s.size()<<endl;
    cout<<s.empty()<<endl;

    return 0;
}