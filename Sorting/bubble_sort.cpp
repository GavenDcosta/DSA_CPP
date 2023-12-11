#include<iostream>
using namespace std;
#include<vector>

void bubbleSort(vector<int>& arr, int n)
{   
    for(int i=0; i<n; i++){
        for(int j = 0; j<n-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}


int main(){
    vector<int> arr = {23,45,7,3,50};
    bubbleSort(arr,5);
    cout<<"Sorted array is "<<endl;
    for(int i = 0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}