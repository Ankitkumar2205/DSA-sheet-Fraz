#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

int maxProfit(vector<int> &prices){

    int maxProfit =0;
    for(int i=0;i<prices.size();i++){
        maxProfit = maxProfit+max(0,prices[i+1]-prices[i]);

    }
    return maxProfit;
}

int main(){
    vector<int> prices{7,1,5,3,6,4};
    int maxP = maxProfit(prices);
    cout<<maxP<<endl;
    return 0;
}