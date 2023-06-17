class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
            int count=0;
            int cur=nums[0];
            int k=1;
            for(int i=1; i<nums.size(); i++)
            {
                if(cur != nums[i])
                {
                        cur = nums[i];
                        k++;
                }
                else
                {
                        nums[i]=INT_MAX;
                        
                }
            }
            sort(nums.begin(),  nums.end());
            return k;
        }
};
