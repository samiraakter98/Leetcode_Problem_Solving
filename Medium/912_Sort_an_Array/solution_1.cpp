class Solution {
public:

    void merge(vector<int>& nums, int start, int end)
    {
        int len = end-start+1;
        int *arr = new int[len];
        int left= start;
        int mid = start + (end-start)/2 ;
        int right=mid+1;
        int k=0;
        while(left<=mid && right<=end)
        {
            if(nums[left]>nums[right])
            {
                arr[k] = nums[right];
                right++;
                k++;
            }
            else if(nums[left]<=nums[right])
            {
                arr[k] = nums[left];
                left++;
                k++;
            }
           
        }
        while(left <= mid)
        {
            arr[k]=nums[left];
            k++;
            left++;
        }
        while(right<=end)
        {
            arr[k]=nums[right];
            k++;
            right++;
        }
        // for(int i=0; i<k;i++)
        //     cout<<arr[i]<<" ";
        // cout<<endl;
        for(int i=0; i<k; i++)
        {
            nums[start++]= arr[i];
        }

    }
    void mergeSort(vector<int>& nums, int start, int end)
    {
        if(start >= end)
        {
            return;
        }
        else
        {
            int mid = start + (end - start)/2;
            mergeSort(nums, start, mid);
            mergeSort(nums, mid+1, end);
            merge(nums, start, end);
        }

    }
    vector<int> sortArray(vector<int>& nums) {
        int len = nums.size();
        mergeSort(nums, 0, len-1);
        // for(int i=0; i<len; i++)
        // {
        //     // cout<<nums[i]<<" ";
        // }
        return nums;
    }
};
