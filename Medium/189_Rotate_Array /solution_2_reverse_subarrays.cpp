
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
      // if k>n , this corner case should be handled
        k = k%nums.size();
      //first reverse (n-k)
      reverse(nums.begin(), nums.begin()+nums.size()-k) ;
      // 2nd reverse last k elements
      reverse(nums.begin()+nums.size()-k, nums.end()); 
      //now reverse whole array
      reverse(nums.begin(), nums.end());
        
    }
};
