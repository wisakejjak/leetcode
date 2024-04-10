class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = prices[0];
        int max_delta = 0;
        for (int i = 1; i < prices.size(); i++)
            if (prices[i] < buy)
                buy = prices[i];
            else if (prices[i] - buy > max_delta)
                max_delta = prices[i] - buy;
        return max_delta;
    }
};
