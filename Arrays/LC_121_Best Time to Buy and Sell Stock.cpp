class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0,buy=prices[0],n=prices.size();
        for(int i=1;i<n;i++){
            buy=min(buy,prices[i]);
            profit=max(prices[i]-buy,profit);
        }
        return profit;
    }
};