class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int k = prices.size();
        int profit=0;
        for(int i=0; i<k;i++)
        {
           int max = 0;
           int idx = i;
           // cout<<"L: "<<i<<endl;
           for(int j = i+1; j < k; j++)
           {
               if(prices[j-1] > prices[j])
               {
                   
                   profit+= prices[j-1] - prices[i];
                   idx = j-1;
                   cout<<prices[j-1]<<" "<<prices[i]<<endl;
                   cout<<idx<<endl;
                   // cout<<profit<<endl;
                   break;
               }
               else if(j == k-1 && prices[j-1] <= prices[j])
               {
                   profit+= prices[j] - prices[i];
                   idx = j-1;
                   cout<<prices[j-1]<<" "<<prices[i]<<endl;
                   cout<<idx<<endl;
                   break;
               }
           }
            i = idx;
            // profit+=max;
            
        }
        return profit;
        
    }
};
