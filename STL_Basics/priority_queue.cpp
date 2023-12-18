#include<iostream>
using namespace std;
#include<queue>

int main(){
    priority_queue<int> maxi;    //max heap

    priority_queue<int, vector<int>, greater<int> > mini;   //min heap

    maxi.push(1);
    maxi.push(2);
    maxi.push(4);
    maxi.push(3);

    int n = maxi.size();

    for(int i = 0; i < n; i++){     
        cout<<maxi.top()<<endl;     //returns the max element first
        maxi.pop();                 //will pop the max element
    }

    mini.push(1);
    mini.push(2);
    mini.push(4);
    mini.push(3);

    int m = mini.size();

    for(int i = 0; i < m; i++){     
        cout<<mini.top()<<endl;     //returns the min element first
        mini.pop();                 //will pop the min element
    }

    cout<<mini.empty()<<" "<<maxi.empty()<<endl;


    return 0;
}