
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=nums.size();
        int cur = nums[0];
        int count = 1;
        for(int i=1; i<nums.size(); i++)
        {
            if(nums[i] == cur && count > 0)
            {
                count--;
            }
            else if(nums[i] == cur && count <= 0)
            {
                nums[i] = INT_MAX;
                count--;
                k--;
            }
            else if(nums[i] != cur)
            {
                count = 1;
                cur = nums[i];
            }
        }
        sort(nums.begin(), nums.end());
        return k;
    }
};
