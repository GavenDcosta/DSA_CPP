#include<iostream>
using namespace std;
#include <bits/stdc++.h>


string replaceSpaces(string &str){
	for(int i = 0; i<str.length(); i++){
		if(str[i] == ' '){
			str.replace(i, 1, "@40");
		}
	}
	return str;
}

int main(){
    
    return 0;
}