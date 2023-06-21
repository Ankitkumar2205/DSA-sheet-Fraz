#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int findMajorityElement(vector<int> nums){
    unordered_map<int,int> mp;
    int n=nums.size();
    int numb;
    for(int i:nums){
        mp[i]+=1;
         if(mp[i]>n/2){
            numb = i;
            return i;
         }
    }
    return numb;
}
int main(){
    vector<int> nums{3,2,3};

    int mE=findMajorityElement(nums);
    cout<<mE<<endl;
    return 0;
}