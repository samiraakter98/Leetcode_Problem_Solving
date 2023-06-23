class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int p, int target)
    {
        unordered_map <int, int> map;
        
        for(int i=0; i <nums.size(); i++)
        {
            if( i==p) continue;
            if(map.find(nums[i]) != map.end())
            {
                return {target - nums[i], nums[i]};
            }
            else
            {
                map[target-nums[i]] = i;
            }
            
        }
        return {};
    }
    bool does_exist(vector<vector<int>> v, vector<int> v1)
    {
        // cout<<v.size()<<endl;
        for(int i=0; i<v.size(); i++)
        {
            // cout<< v[i][0] <<" "<<v[i][1]<<" "<<v[i][1]<<endl;
            // cout<< v1[0] <<" "<<v1[1]<<" "<<v1[1]<<endl;
            if(v[i][0]== v1[0] && v[i][1]== v1[1] && v[i][2]== v1[2])
                return true;
        }
        return false;
    }
    
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n= nums.size();
        vector<vector<int>> sumNums;
        vector<int> twoSumNum;
        for (int i=0; i<n;i++)
        {
            int target = 0-nums[i];
            vector<int> val = twoSum(nums, i, target);
            
            if(val.size() == 0) continue;
            val.push_back(nums[i]);
            sort(val.begin(), val.end());
            
            // cout<<"........"<<val[0]<<" "<<val[1]<<val[2]<<" "<<endl;
            // cout<<does_exist(sumNums, val)<<endl;
            if( !does_exist(sumNums, val))
                sumNums.push_back(val);
            
        }
        return sumNums;
    }
};
