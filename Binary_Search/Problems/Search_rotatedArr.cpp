#include<iostream>
using namespace std;
#include<vector>;

int getPivot(vector<int>& arr, int n){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;

    while(s<e){
        if(arr[mid] >= arr[0]){
            s = mid + 1;
        }
        else{
            e = mid;
        }

        mid = s + (e-s)/2;
    }

    return s;
}

int binary_search(vector<int>& arr, int s, int e, int key){
    int start = s;
    int end = e;
    int mid = (start + end)/2;

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

        mid = (start + end)/2;
    }
    return -1;
    
}


int search(vector<int>& arr, int n, int k)
{
    int pivot = getPivot(arr, n);
    if(k>=arr[pivot] && k <=arr[n-1]){
        return binary_search(arr, pivot, n-1, k);
    }
    else{
        return binary_search(arr, 0, pivot-1, k);
    }
}


int main(){
    vector<int> arr;
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);
    arr.push_back(1);
    arr.push_back(2);

    cout<<search(arr, 5, 1)<<endl;
    return 0;
}