class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit=0;
        int n=prices.size();
        for(int i=0;i<n;i++){
            int buy=prices[i];
            for(int j=i+1;j<n;j++){
                int sell=prices[j];
                if(buy<sell){
                    int profit=sell-buy;
                    maxprofit=max(maxprofit, profit);
                }
            }
        }
        return maxprofit;
    }
};
