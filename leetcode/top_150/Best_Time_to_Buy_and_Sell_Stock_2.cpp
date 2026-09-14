class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int  menor = -1, maior = 0, lucro = 0;
        for(int i = 0; i < prices.size(); i++)
        {
            if(menor == -1 || prices[i] < menor){
                menor = prices[i];
            }
            if(prices[i] > menor)
            {
                if(i != prices.size() - 1 && prices[i] < prices[i + 1])
                    continue;
                else
                {
                    lucro += (prices[i] - menor);
                    menor = -1;
                } 
            }
        }
        return lucro;
    }
};