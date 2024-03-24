class Solution {
public:
    vector<int> merged(vector<int>& nums1, vector<int>& nums2)
    {
        int m=nums1.size();
        int n = nums2.size();
        int len = m+n;
        vector<int> nums(len);
        int i=0,j=0,k=0;
         while(i<m && j<n)
         {
            if(nums1[i]<=nums2[j])
            {
                nums[k] = nums1[i];
                i++;k++;
            }
            else{
                 nums[k] = nums2[j];
                j++;k++;
            }
        }
        if(i < m)
        {
            while(i<m)
            {
                nums[k] = nums1[i];
                i++;k++;
            }
        }
        else
        {
             while(j<n)
            {
            nums[k] = nums2[j];
                j++;k++;
            }
        }
        // for(int k=0;k<m+n; k++)
        // cout<<nums[k]<<" ";
        return nums;
    }
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m= nums1.size();
        int n= nums2.size();
        vector<int>nums(m+n);
        nums = merged(nums1,nums2);
        
        double median =0.0;
        if((m+n)%2 != 0) median =nums[(m+n)/2];
        else {
            int p=(m+n)/2;
            cout<<nums[p] <<" "<<nums[p-1] ;
            median = (nums[p] + nums[p-1])/2.0;
        }
        return median;
    }
};
