class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
    int len = nums.size();
    for(int i=0; i<len; i++)
    {
        int x = nums[i];
        while(x>=1 && x<=len && x!=i+1 && nums[x-1] != x)
        {
            swap(nums[x-1], nums[i]);
            x =  nums[i];

        }
    }
    for(int i=0; i<len; i++)
        cout<<nums[i]<<" ";
    for(int i=0; i<len; i++)
    {
        if(nums[i] != i+1) return i+1;
    }
    return len+1;

    }
};
