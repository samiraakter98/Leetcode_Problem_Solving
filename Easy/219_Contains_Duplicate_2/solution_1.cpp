class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        for(int i=0; i<nums.size(); i++)
        {
            if(m.find(nums[i]) != m.end())
            {
                int diff = abs(m[nums[i]] - i);
                // cout<<diff<<endl;
                if(diff <= k) return true;
                else if(diff > k)
                {
                    // cout<<"into";
                    m[nums[i]] = i;
                } 
            }
            else
            {
                m[nums[i]] = i;
            }
        }
        return false;
    }
};
