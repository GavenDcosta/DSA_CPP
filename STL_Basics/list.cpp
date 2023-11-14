#include<iostream>
#include<list>
using namespace std;

void display(list<int> &lst){
    list<int> :: iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}

int main(){
    list<int> list1; // List of 0 length   
    list<int> list2(3); // Empty List of size 3

    //Putting elements int he list
    list1.push_back(5);
    list1.push_back(10);
    list1.push_back(2);
    list1.push_back(4);
    list1.push_back(1);
    list1.push_back(110);
    list1.push_back(21);
    list1.push_back(31);
    list1.push_back(100);

    // list<int> :: iterator iter;
    // iter = list1.begin();
    // cout<< *iter<<endl;
    // iter++;
    // cout<< *iter<<endl;
    // iter++;
    // cout<< *iter<<endl;
    // iter++;
    // cout<< *iter<<endl;
    // iter++;
    // cout<< *iter<<endl;

    display(list1);

    //Removing welements from list
    list1.pop_back();
    display(list1);
    list1.pop_front();
    display(list1);
    list1.remove(4);
    display(list1);

    //Sorting the list
    list1.sort();
    display(list1);
    

    list<int> :: iterator iter;
    iter = list2.begin();
    *iter = 45;
    iter++;
    *iter = 69;
    iter++;
    *iter = 50;

    list2.sort();

    ///Mergin a list
    list1.merge(list2);
    cout<<"List 1 after merging ";
    display(list1);

    list1.sort();
    
    display(list1);
    // display(list2); // This will no longer return an output

    //Reversing a list
    list1.reverse();
    display(list1);
    


    return 0;
}