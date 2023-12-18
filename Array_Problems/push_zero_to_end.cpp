#include<iostream>
using namespace std;
#include<vector>


void moveZeroes(vector<int>& nums) {
    int count = 0;
    for(int i = 0; i <nums.size(); i++){
        if(nums[i] == 0){
            nums.erase(nums.begin() + i);
            count++;
            i--;    //do this because once you erase , the rest of the elements will shift, so if you dont do this some elements might get skipped
        }
    }
    for(int j = 0; j<count; j++){
        nums.push_back(0);
    }
}


int main(){
    vector<int> nums;
    nums.push_back(3);
    nums.push_back(0);
    nums.push_back(2);
    nums.push_back(4);
    nums.push_back(0);
    nums.push_back(0);
    nums.push_back(9);

    moveZeroes(nums);

    for(int j = 0; j < nums.size(); j++){
       cout<<nums[j]<<" ";
    }
    cout<<endl;


    return 0;
}