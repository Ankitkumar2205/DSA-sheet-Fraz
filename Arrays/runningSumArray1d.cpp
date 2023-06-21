#include<vector>
#include<iostream>
using namespace std;


vector<int> runningSum(vector<int> nums){

    vector<int> output(nums.size(),0);
    output[0]=nums[0];
    for(int i=1;i<nums.size();i++){
        output[i]=nums[i]+output[i-1];
    }
    return output;
}
int main(){

    vector<int> nums{1,2,3,4};
    vector<int> output;
    output = runningSum(nums);

    for(int i:output){
        cout<<i<<", ";
    }

    return 0;
}