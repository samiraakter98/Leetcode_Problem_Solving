class Solution {
public:
    int jump(vector<int>& nums) {
        int n= nums.size();
        vector<int> dp;
        dp.resize(n,0);
        if(n==1) return 0;
        if(nums[0] >= n)
        {
             dp[n-1] = 1;
             return dp[n-1];
        }
           

        for(int i=0; i<n-1;i++)
        {    
            for(int j=i+1; j<=i+nums[i]; j++)
            {
                if(j>=n) break;
                if( dp[j]==0) dp[j] = dp[i]+1;
                else if(dp[j]!=0 && dp[i]+1 < dp[j])
                {
                        dp[j] = dp[i]+1;
                }
            }
        return dp[n-1];
    }
};
