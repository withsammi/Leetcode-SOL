class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int profit = 0;
        int mProfit = 0;
        for(int i = 0; i< n-1; i++){
            if(prices[i+1]>prices[i]){
                profit = prices[i+1]-prices[i];
                mProfit = mProfit + profit;
            }
        }
        return mProfit;
    }
};