#include<iostream>
using namespace std;
#include<vector>

void rotate(vector<int>& nums, int k) {
    vector<int> temp(nums.size());

    for(int i=0; i<nums.size(); i++){
        temp[(i+k)%nums.size()] = nums[i];
    }

    nums=temp;
}

int main(){
    vector<int> nums;

    nums.push_back(10);
    nums.push_back(15);
    nums.push_back(20);
    nums.push_back(25);

    rotate(nums, 2);

    for(int j = 0; j < nums.size(); j++){
       cout<<nums[j]<<" ";
    }
    cout<<endl;
    
    return 0;
}