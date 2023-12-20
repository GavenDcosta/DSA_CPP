#include<iostream>
using namespace std;
#include<vector>

void reverseString(vector<char>& s) {
    int f = 0;
    int e = s.size() - 1;

    while(f<e){
        swap(s[f], s[e]);
        f++;
        e--;
    } 
}

int main(){
    
    return 0;
}