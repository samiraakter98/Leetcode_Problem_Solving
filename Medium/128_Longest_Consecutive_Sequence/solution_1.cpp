class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        vector<int> consec(nums.size());
        int result=0;
        sort(nums.begin(), nums.end());
        if(nums.size() ==0) return 0;
        consec[0]=1;
        for(int i=1; i<nums.size(); i++)
        {
            if(nums[i]-nums[i-1] == 1  )
            {
                consec[i]=consec[i-1]+1;
            }
            else if(nums[i]==nums[i-1])
            {
                 consec[i]=consec[i-1];
            }
            else
            {consec[i] =1;}
                
        }
        
        sort(consec.begin(), consec.end());
        // for(int i=0; i<nums.size(); i++)
        // {
        //     cout<<consec[i]<<" ";
        // }
        result= consec[nums.size()-1];
        return result;
    }
};
