class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int MaxProfit =0, BestBuy = prices[0];
        for(int i=1; i<prices.size(); i++){
            if(prices[i] > BestBuy){
             MaxProfit = max(MaxProfit, prices[i] - BestBuy);
            }
            BestBuy = min(BestBuy,prices[i]);

        }
        return MaxProfit;
    }
};