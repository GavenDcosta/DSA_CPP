#include<iostream>
using namespace std;
#include<vector>

int firstOcc(vector<int>& arr, int n, int key){
    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;

    while(s<=e){
        if(arr[mid] == key){
             ans = mid;
             e = mid - 1;
        }
        else if(key > arr[mid]){
             s = mid + 1;
        }
        else if(key < arr[mid]){
             e = mid - 1;
        }

        mid = s + (e-s)/2;
    }
    return ans;
}

int lastOcc(vector<int>& arr, int n, int key){
    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;

    while(s<=e){
        if(arr[mid] == key){
             ans = mid;
             s = mid + 1;
        }
        else if(key > arr[mid]){
             s = mid + 1;
        }
        else if(key < arr[mid]){
             e = mid - 1;
        }

        mid = s + (e-s)/2;
    }
    return ans;
}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    pair<int, int> p;
    p.first = firstOcc(arr, n, k);
    p.second = lastOcc(arr, n, k);

    return p;
}



int main(){
     vector<int> arr = {1, 2, 3, 4, 4, 4, 5, 6};
    int key = 4;
    
    pair<int, int> result = firstAndLastPosition(arr, arr.size(), key);

    if (result.first != -1 && result.second != -1) {
        cout << "First occurrence: " << result.first << endl;
        cout << "Last occurrence: " << result.second << endl;
    } else {
        cout << "Element not found." << endl;
    }

    return 0;
}