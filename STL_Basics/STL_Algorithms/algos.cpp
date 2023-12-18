#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>


int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(5);
    v.push_back(7);

    cout<<binary_search(v.begin(), v.end(), 5)<<endl;
    cout<<binary_search(v.begin(), v.end(), 15)<<endl;

    cout<<"Lower Bound "<<lower_bound(v.begin(), v.end(), 5)-v.begin()<<endl;    //first occurence of 5
    cout<<"Upper Bound "<<upper_bound(v.begin(), v.end(), 5)-v.begin()<<endl;    //last occurence of 5

    int a = 3;
    int b=5;

    cout<<max(a,b)<<endl;
    cout<<min(a,b)<<endl;
    

    swap(a,b);
    cout<<a<<" "<<b<<endl;



    string abc = "efwr23rqh3fpqg3b";
    reverse(abc.begin(), abc.end());
    cout<<abc<<endl;



    rotate(v.begin(), v.begin()+1, v.end());
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;



    sort(v.begin(), v.end());   //based on Intro sort (Introspective sort) => combination of quick sort, heap sort, insertion sort
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;




    return 0;
}