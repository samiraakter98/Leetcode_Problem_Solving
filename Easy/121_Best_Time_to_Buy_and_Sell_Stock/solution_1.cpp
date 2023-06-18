class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n= prices.size();
        int max_so_far=prices[n-1];
        int diff= 0;
        for(int i=n-2; i>=0;i--)
        {
            
            if(max_so_far <=prices[i] )
            {
                max_so_far = prices[i];
            }
            else
            {
                diff=max(diff, max_so_far-prices[i]);
            }
        }
        return diff;
    }
    
};
