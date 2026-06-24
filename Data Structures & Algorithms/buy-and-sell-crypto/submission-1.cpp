class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int n=prices.size();
        int mini=prices[0];

        // for(int i=0;i<n;i++){
        //     int buy=prices[i];
        //     for(int j=i+1;j<n;j++){
        //         int sell=prices[j];
        //         if(buy<sell){
        //             int profit=sell-buy;
        //             maxprofit=max(maxprofit, profit);
        //         }
        //     }
        // }
        // return maxprofit;
        for(int i=0;i<n;i++){
            int cost=prices[i]-mini;
            profit=max(profit, cost);
            mini=min(mini, prices[i]);
        }
        return profit;
    }
};
