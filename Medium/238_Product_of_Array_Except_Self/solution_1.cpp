class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();

        vector<int> left(n);
        vector<int> right(n);
        vector<int> result(n);
        // left[0]=nums[0];
        // right[n-1] = nums[n-1];
        int left_product=1;
        int right_product =1 ;
        for(int i=0,j=n-1; i<n,j>=0;i++,j--)
        {
            left[i] = left_product;
            left_product = left_product * nums[i];
            right[j] = right_product;
            right_product = right_product * nums[j]; 
        }
        for(int i=0; i<n; i++)
        {
            result[i] = left[i]*right[i];
        }
        return result;
    }
};
