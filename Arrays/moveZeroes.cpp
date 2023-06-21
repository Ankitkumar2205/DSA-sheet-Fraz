#include<vector>
#include<iostream>
using namespace std;

void moveZeroes(vector<int>& nums){
    int i=0;
    for(int j=0;j<nums.size();j++){
        if(nums[j]!=0){
            swap(nums[i],nums[j]);
            i++;
        }
    }
}

int main(){
    vector<int> nums{1,0,0,3,12};
    moveZeroes(nums);
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<", ";
    }
    return 0;
}