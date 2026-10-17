class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0,bestbuy = prices[0];
        int n = prices.size();
        int sum=0;
        for(int i=1;i<n;i++){
            if(prices[i] > bestbuy){
                profit = prices[i]-bestbuy;
                sum+=profit;
            }
            bestbuy = prices[i];
        }
        return sum;
    }
};