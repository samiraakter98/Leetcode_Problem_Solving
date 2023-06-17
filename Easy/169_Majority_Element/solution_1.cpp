class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;
        int n=nums.size();
        for(int i=0; i<n; i++)
        {
            mp[nums[i]]++;
        }
        int max=INT_MIN;
        int val;
        for(auto item:mp)
        {
            if(item.second > max)
            {
                max = item.second;
                val = item.first;
            }
        }
        return val;
    }
};
