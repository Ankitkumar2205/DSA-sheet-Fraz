#include<iostream>
#include<math.h>
#include<vector>
using namespace std;

int maxProfit(vector<int> &prices){
    // for max Profit 
    /* buy stock with minimum price and sell on day 
    when it's price is maximum*/
    int maxProfit = 0;
    int minP=INT_MAX;
    int n = prices.size();
    for(int i=0;i<n;i++){
        minP = min(prices[i],minP);
        maxProfit = max(maxProfit,prices[i]-minP);
    }
    return maxProfit;
}
int main(){

    vector<int> prices{7,1,5,3,6,4};
    int max = maxProfit(prices);
    cout<<"max Profit is : "<<max;
    return 0;
}