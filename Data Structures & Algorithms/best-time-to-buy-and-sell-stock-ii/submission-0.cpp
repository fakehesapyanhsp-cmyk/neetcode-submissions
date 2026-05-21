class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buyprice = prices[0];
        int profit = 0;
        int n = prices.size();
        for (int i = 1; i < n; i++) {
            if (prices[i] > buyprice) {
                profit += prices[i] - buyprice;
            }
            buyprice = prices[i];
        }
        return profit;
    }
};