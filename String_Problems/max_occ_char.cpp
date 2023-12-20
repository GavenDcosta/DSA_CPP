#include<iostream>
using namespace std;
#include<string>

char getmaxOccChar(string s){
   int arr[26] = {0};
   int n = 0;

   for(int i = 0; i<s.length(); i++){
     char ch = s[i];
     if(ch>='a' && ch<='z'){
        n = ch - 'a';
     }else{
        n = ch - 'A';
     }

     arr[n]++;
   }

   int maxi = -1, ans = -1;
   for(int i = 0; i<26; i++){
      if(maxi < arr[i]){
        ans = i;
        maxi = arr[i];
      }
   }

   char finalAns = 'a' + ans;
   return finalAns;
}

int main(){
    string s;
    cin>>s;
    cout<<getmaxOccChar(s)<<endl;
    return 0;
}