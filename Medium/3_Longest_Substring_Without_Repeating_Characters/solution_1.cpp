class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len=0;
        int sz=s.length();
        for(int i=0;i<sz;i++)
        {
            map<char,int> m;
            int j=i;
            int count=0;
            while(m[s[j]]==0 && j <sz)
            {
                m[s[j]]=1;
                // cout<<s[j];
                j++;
                count++;
                
            }
            // cout<<endl;
            if(count > len ) len = count;
            // cout<<endl;
        }
        return len;
    }
};
