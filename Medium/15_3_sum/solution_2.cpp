class Solution {
public:
    
    
    vector<vector<int>> threeSum(vector<int>& nums) {
       vector<vector<int>>  result;
       sort(nums.begin(), nums.end());
       map<vector<int>,int> mp;
       for(int i=0; i<nums.size()-2; i++)
       {
           int val = nums[i];
           int j=i+1, k=nums.size()-1;
           while(j<k)
           {
               int temp = nums[j]+nums[k];
               if( (val+temp) == 0 )
               {
                //    vector<int> vec;
                //    vec.push_back(nums[i]);
                //    vec.push_back(nums[j]);
                //    vec.push_back(nums[k]);
                //    sort(vec.begin(), vec.end());
                   mp[{nums[i],nums[j],nums[k]}] = 1;;
                   j++;k--;

               }
               else if( (val+temp) > 0)
               {
                   k--;
               }
               else
               {
                   j++;
               }
           }
       }
        for(auto i: mp)
        {
            // vector<int> temp = i.first;
            result.push_back(i.first);
        }
        return result;
    }
};
