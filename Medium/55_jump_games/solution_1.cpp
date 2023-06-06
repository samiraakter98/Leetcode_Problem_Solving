//DP solution
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        vector<bool> dp;
        dp.resize(n, false);
        int target = n-1;
        dp[n-1] = true;
        for(int i=n-2; i>=0; i --)
        {
            if( nums[i]+i >= target )
            {
                dp[i] = true;
                target = i;
            }
        }
        return dp[0];
    }
};
