class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
            int k = nums.size();
            int idx;
            if(k > 1) idx =1;
            else idx =0;
            int count = 1;
            for (int i = 0; i < k-1; i++)
            {
                if( nums[i] == nums[k-1]) break;
                for(int j = idx; j<k; j++)
                {
                    if(nums[j] != nums[i])
                    {
                        
                        int temp = nums[i+1];
                        nums[i+1] = nums[j];
                        nums[j] = temp;
                        idx = j+1;
                        count =count + 1;
                        break;
                    }
                }
                if (idx > k) break;
            }
            return count;
        }
};
