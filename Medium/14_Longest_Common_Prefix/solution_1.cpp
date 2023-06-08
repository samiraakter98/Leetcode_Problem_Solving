
#include <bits/stdc++.h>
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        string pre="";
        sort(strs.begin(), strs.end());
        
        int len = strs[0].length();
        int i=0;
        while(i<len)
        {
            int flag=0;
            for(int j=0;j<n-1;j++)
            {
                if(strs[j][i] != strs[j+1][i] )
                {
                    flag =1;
                    break;
                }
            }
            if(flag == 1)break;
            i++;
        }
        pre = strs[0].substr(0, i);
        return pre;
    }
};
