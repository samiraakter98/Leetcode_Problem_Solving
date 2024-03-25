class Solution {
public:
    int findTarget(vector<int>& nums, int target)
    {
        int n = nums.size();
        int l=0, h=n-1;
        int mid =-1;
        while(l<=h)
        {
            mid = (l+h)/2;
            if(nums[mid]==target) return mid;
            else if(target < nums[mid]){h=mid-1;}
            else l=mid+1; 
        }
        return -1;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
       vector<int> result(2);
       int idx = findTarget(nums, target);
       if(idx==-1){
        result[0]=result[1]=-1;
        return result;
       }
       for(int i=idx;i>=0;i--){
            if(nums[i] == target) {result[0]=i;}
       }
         for(int i=idx;i<nums.size();i++){
            if(nums[i] == target) {result[1]=i;}
       }
       cout<<result[0]<<" "<<result[1];
       return result; 
    }
};
