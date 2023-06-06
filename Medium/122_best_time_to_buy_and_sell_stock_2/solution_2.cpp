class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int sum_temp =0;
        int sum = 0;
        int n = prices.size();
        int start = prices[n-1];
        for(int i=n-2; i>=0; i--)
        {
            if(prices[i] > prices[i+1])
            {
                start = prices[i];
                sum = sum + sum_temp;
                sum_temp = 0;
            }
            else 
            {
                if( (start - prices[i]) > sum_temp)
                {
                    sum_temp = start - prices[i];
                }
            }
        }
        return sum+sum_temp;
        
    }
};
