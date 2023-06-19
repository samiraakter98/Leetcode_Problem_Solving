class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0,j=0;
        for(i=0,j=0; i<s.length(),j<t.length(); j++)
        {
            // cout<<s[i]<<" "<<t[j]<<endl;
            if(s[i] == t[j])
            {
                
                i++;
            } 
        }
        // cout<<i<<endl;
        if(i == s.length()) return true;
        else return false;
    }
};
