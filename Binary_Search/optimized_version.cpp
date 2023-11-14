// In this the max int range exceeded problem wont occour

#include<iostream>
using namespace std;


int binary_search(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;

    while(start<=end){
        if(arr[mid] == key){
           return mid;
        }

        if(key > arr[mid]){
           start = mid+1;
        }
        else{
            end = mid - 1;
        }

        mid = start + (end - start)/2;
    }
    return -1;
    
}

int main(){
    int key, size;

    cout<<"Enter the size of the array"<<endl;
    cin>>size;

    int arr[size];
    for(int i = 0; i<size; i++){
        cout<<"Enter the "<<(i+1)<<" element"<<endl;
        cin>>arr[i];
    }

    cout<<"Enter the element to search"<<endl;
    cin>>key;

    int index = binary_search(arr, size, key);
    if(index){
        cout<<"Element found at position "<<index<<endl;
    }
    else{
        cout<<"Element is not present"<<endl;
    }

    return 0;
}