#include<iostream>
using namespace std;

int floorSqrt(int n)
{
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    long long int ans = -1;

    while(s<=e){
        long long int square = mid*mid;
        
        if(square == n)
            return mid;
        

        if(square < n){
            ans = mid;
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }

    return ans;
}


int main(){
    long long int n = 25;

    cout<<floorSqrt(n)<<endl;
}