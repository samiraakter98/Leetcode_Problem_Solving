class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int> mp;
        vector<int> result;
        for(int i=0; i<nums.size(); i++)
        {
            if(mp.find(nums[i])!= mp.end())
            {
                result.push_back(nums[i]);
            }
            mp[nums[i]]=1;
        }
        return result;
    }
};
