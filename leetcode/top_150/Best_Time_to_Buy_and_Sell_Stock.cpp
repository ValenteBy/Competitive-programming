class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int low = prices[0], ans=0;

        for(int i = 1; i < prices.size(); i++)
        {            
            low = min(prices[i], low);   
            ans = max(ans, prices[i] - low);            
        }

        return ans;
    }
};