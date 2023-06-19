#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<int> twoSum(vector<int> nums,int target){
    // brute force
    // for every i we will check a j in rest of the array 
    // such that nums[i]+nums[j]=target
    // time complexity O(n^2)
    // vector<int> result;
    // int n = nums.size();
    // for(int i=0;i<n;i++){
    //     for(int j=i+1;j<n;j++){
    //         if((nums[i]+nums[j])==target){
    //             result.push_back(i);
    //             result.push_back(j);
    //             return result;
    //         }
    //     }
    // }
//------------- optimised solution
    vector<int> result;
    unordered_map<int,int> m;
    int n = nums.size();
    for(int i=0;i<n;i++){
        int temp = target - nums[i];
        if(m.find(temp)!=m.end()){
            //insert the index of temp and nums[i] in the result
            result.push_back(i);
            result.push_back(m[target-nums[i]]);
            return result;
        }else{
            m.insert(make_pair(nums[i],i));
        }
    }


    return result;
}
int main(){

    vector<int> nums{2,7,11,15};
    vector<int> result;
    int target = 9;
    result = twoSum(nums,target);
    cout<<result[0]<<", "<<result[1];
    return 0;
}