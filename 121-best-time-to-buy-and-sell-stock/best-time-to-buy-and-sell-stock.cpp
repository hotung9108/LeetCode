class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int result = 0, min = prices[0];
        for(int i = 1; i < prices.size(); i++){
            if(prices[i] < min){
                min = prices[i];
            }
            if(prices[i] > min){
                if(prices[i] - min > result){
                    result = prices[i] - min;
                }
            }
        }
        return result;
    }
};