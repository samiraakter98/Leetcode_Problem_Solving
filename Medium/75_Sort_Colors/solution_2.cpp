class Solution {
public:
    void print(vector<int>& nums)
    {
        for(int i=0; i<nums.size(); i++)
            cout<<nums[i]<<" ";
        cout<<endl;
    }
    void sortColors(vector<int>& nums) {
        int left=0;
        int n=nums.size();
        int right=nums.size()-1;
        int i=0;
        while(i<=right)
        {
            if(nums[i] == 0)
            {
                int temp = nums[i];
                nums[i] = nums[left];
                nums[left] = temp;
                left++;
                i++;
                // print(nums);
            }
            else if(nums[i] == 2)
            {
                int temp = nums[i];
                nums[i] = nums[right];
                nums[right] = temp;
                right--;
                // print(nums);
            }
            else
            {
                i++;
            }
            // cout<<i<<endl;
            
        }
    }
};
