class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l=0,r=1;
        int profit = INT_MIN;
        while(r < prices.size()){
            int sum = prices[r]-prices[l];
            if(sum > 0){
                profit = max(profit,sum);
                r++;
            }
            else{
                l++,r++;
            }
        }
        return profit;
    }
};
