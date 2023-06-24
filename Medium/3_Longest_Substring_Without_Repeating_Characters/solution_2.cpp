class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int maxCount=0;
        for(int i=0; i<s.length(); i++)
        {
            unordered_map<char,int> mp;
            int j=i;
            for(; j<s.size(); j++)
            {
                if(mp.find(s[j]) != mp.end()) break;
                else
                {
                    mp[s[j]]=1;
                    
                }
            }
            if(mp.size() > maxCount) maxCount = mp.size();

        }
        return maxCount;
    }
};
