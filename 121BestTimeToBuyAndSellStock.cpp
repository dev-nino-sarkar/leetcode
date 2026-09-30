class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0, buy = INT_MAX;

        for(int i = 0; i < prices.size(); i++) {
            profit = max(profit, prices[i] - buy);
            buy = min(buy, prices[i]);
        }

        return profit;
    }
};
