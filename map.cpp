#include<iostream>
#include<map>
#include<string>
using namespace std;

//Map is an Associative array
int main(){
    map<string, int> marksMap;
    marksMap["Gaven"] = 98;
    marksMap["luffy"] = 10;
    marksMap["naruto"] = 25;

    marksMap.insert({{"Xin", 84}, {"Tsunade", 70}});

    map<string, int> :: iterator itr;
    for (itr = marksMap.begin(); itr != marksMap.end(); itr++)
    {
        cout<<(*itr).first<<" "<<(*itr).second<<"\n";
    }

    cout<<"The size is : "<<marksMap.size()<<endl;
    cout<<"The max size is : "<<marksMap.max_size()<<endl;
    cout<<"The empty return value is : "<<marksMap.empty()<<endl;
    
    return 0;
}