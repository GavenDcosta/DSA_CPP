#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<< " ";
        cout<<v.at(i)<< " ";
    }
    cout<<endl;
}

//Template Fucntions
template <class T>
void displayVector(vector<T> &v){
    cout<<"Displaying this vector"<<endl;
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<< " ";
        cout<<v.at(i)<< " ";
    }
    cout<<endl;
}

void odd_even(vector<int> &v){
    for(int i=0; i<v.size(); i++){
        if(v.at(i)%2 == 0){
            cout<<v.at(i)<<" is Even"<<endl;
        }
        else{
            cout<<v[i]<<" is Odd"<<endl;
        }
    }
}

int main(){
    // Ways to create a vector
    vector<int> vect1; // 0 length integer vector
    vector<char> vect2(4); // 4-element char vector
    vector<char> vect3(vect2); // 4-element char vector from vect2
    vector<int> vect4(6, 3); // 6-element vector of 3's

    vect2.push_back('5');
    displayVector(vect2);
    displayVector(vect3);
    displayVector(vect4);
   
    int ele, size,n=5;

    cout<<"Enter the size of the Vector "<<endl;
    cin>>size;

    for (int i = 0; i < size; i++)
    {
        cout<<"Enter an element to add to this vector "<<endl;
        cin>>ele;
        vect1.push_back(ele);
        
    }
    display(vect1);

    vect1.pop_back();

    vector<int> :: iterator iter = vect1.begin();
    vect1.insert(iter, 566);
    vect1.insert(iter+2, 699);
    vect1.insert(iter+4,2, 400);

    display(vect1); 

    odd_even(vect1);

    cout<<vect1.front()<<endl;
    cout<<vect1.back()<<endl;
    cout<<vect1.size()<<endl;
    cout<<vect1.capacity()<<endl;

    return 0;
}