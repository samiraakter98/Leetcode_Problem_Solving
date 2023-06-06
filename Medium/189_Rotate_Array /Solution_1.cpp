
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int len = nums.size();
        int swap_count=0;
        for(int i=0;i<k;i++)
        {
            int idx =i;
            int temp=nums[i];
            for(int j=idx; ;j++)
            {
                
                int new_idx = (idx+k)%len;
                
                int flag = nums[new_idx];
                nums[new_idx]=temp;
                temp = flag;
                
                // cout<<"new_idx: "<<new_idx<<" val: "<<temp<<endl;
                idx = new_idx;
                swap_count++;
                if(idx == i) 
                {
                    // nums[i] = temp;
                    break;
                }
                
            }
            if(swap_count==len) break;
            // for(int j=0;j<len; j++)
            //     cout<<nums[j]<<" ";
            // cout<<endl;
        }
    }
};
