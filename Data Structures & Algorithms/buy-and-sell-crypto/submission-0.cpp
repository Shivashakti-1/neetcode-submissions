class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int profit=0;

       for(int i=0;i<prices.size();i++)
       {
        for(int j=prices.size()-1;j>i;j--)
        {
            int count = 0;
            count = prices[j]-prices[i];
            profit=max(profit, count);
        }
       }
       return profit; 
    }
};
