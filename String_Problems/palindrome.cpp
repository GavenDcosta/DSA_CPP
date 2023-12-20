#include <bits/stdc++.h> 
#include<string>
#include<iostream>
using namespace std;


bool isAlphanumeric(char c) {
    return isalnum(c);
}

char toLower(char c) {
    return tolower(c);
}

bool checkPalindrome(string s) {
    int st = 0;
    int e = s.size() - 1;

    while (st <= e) {
        while (st <= e && !isAlphanumeric(s[st])) {
            st++;
        }

        while (st <= e && !isAlphanumeric(s[e])) {
            e--;
        }

        if (st <= e && toLower(s[st]) != toLower(s[e])) {
            return 0;
        } else {
            st++;
            e--;
        }
    }
    return 1;
}

int main(){
    
    return 0;
}
