#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> squareArray(vector<int> nums){

    vector<int> result;
    for(int i:nums){
        result.push_back(i*i);
    }
    sort(result.begin(),result.end());
    return result;
}

int main(){
    vector<int> nums{-4,-1,0,3,10};
    vector<int> output;
    output=squareArray(nums);
    return 0;
}