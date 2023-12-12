class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> hash;
        for(int i=0; i<nums.size(); i++)
        {
            hash.insert(nums[i]);
        }
        int result=0;
        for(int i=0; i<nums.size(); i++)
        {
            if(hash.find(nums[i]-1) == hash.end())
            {
                int temp=1;
                int num=nums[i]+1;
                while(hash.find(num) != hash.end())
                {
                    temp++;
                    num++;
                }
                result=max(temp,result);
            }
        }
        return result;
    }
};
