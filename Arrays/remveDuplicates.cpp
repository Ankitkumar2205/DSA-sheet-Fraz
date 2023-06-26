#include<vector>
#include<iostream>
#include<unordered_map>
using namespace std;


int removeDuplicates(vector<int>& nums){
    int i=0;//iterator for the array
    int left = 1;// this indicates the position of newly found 
    // unique element

    for(int i=1;i<nums.size();i++){
        /* check if the ith element and left
        element 
        if nums[i]!=nums[i-1] the element at left is unqiue 
        */
       if(nums[i]!=nums[i-1]){
        nums[left++]=nums[i];
       }
    }
       return left;
    }

int main()
{
    vector<int> nums{1,1,2};
    cout<<removeDuplicates(nums)<<endl;
    return 0;
}