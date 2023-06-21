#include<vector>
#include<iostream>

using namespace std;

int findPivotIndex(vector<int> nums){
    int pI;
    int lSum=0;
    int rSum=0;
    //calculate rSum i.e from left to right of the array
    for(int i:nums){
        rSum+=i;
    }

    for(int i=0;i<nums.size();i++){
        rSum=rSum-nums[i];
        if(lSum==rSum){
            return i;
        }
        lSum=lSum+nums[i];
    }
    return -1;
}

int main(){
    vector<int> nums{1,7,3,6,5,6};
    int pI;
    pI = findPivotIndex(nums);
    cout<<pI<<endl;
    return 0;
}