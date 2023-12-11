#include<iostream>
using namespace std;
#include<vector>

void insertionSort(int n, vector<int> &arr){

    for(int i=1; i<n; i++){
        int temp = arr[i];
        int j = i-1;
        for(; j>=0; j--){
            if(arr[j] > temp){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1] = temp;
    }
}

int main(){
    vector<int> arr = {23,45,7,3,50};
    insertionSort(5,arr);
    cout<<"Sorted array is "<<endl;
    for(int i = 0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}