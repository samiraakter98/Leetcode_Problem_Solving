class Solution {
public:
    void sortColors(vector<int>& nums) {
        int colors=3;
        int k=0;
        while(colors--)
        {
            // cout<<i<<endl;
            // int k=j;
            for(int i=0; i<nums.size();i++)
            {
                if(nums[i] == (2-colors))
                {
                    // cout<<nums[i]<<endl;
                    int temp = nums[i];
                    nums[i] =nums[k];
                    nums[k] = temp;
                    k++;
                }
            }
        }
    }
};
