#include<iostream>
using namespace std;
#include<vector>

void selectionSort(vector<int>& arr, int n)
{   
    for(int i=0; i<n-1;i++){
       int minIndex = i;
   
       for(int j=i+1; j<n; j++){
           if(arr[j] < arr[minIndex])
               minIndex = j;
       }
       swap(arr[minIndex], arr[i]);
    }
}

int main(){
    vector<int> arr = {23,45,7,3,50};
    selectionSort(arr,5);
    cout<<"Sorted array is "<<endl;
    for(int i = 0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}