class Solution {
public:
    bool isPalindrome(string s) {
        
        int n=s.length();
        for(int i=0,j=n-1;i<=j;)
        {
            
            if(!(s[i] >=65 && s[i]<=90) && !(s[i]>=97 && s[i]<=122) && !(s[i]>=48 && s[i]<=57))
            {
                cout<<"s[i]:"<<s[i]<<endl;
                i++;
                continue;
            }
             if(!(s[j] >=65 && s[j]<=90) && !(s[j]>=97 && s[j]<=122)&& !(s[j]>=48 && s[j]<=57))
            {
                j--;continue;
            }
            if(s[i] >=65 && s[i]<=90) s[i]+=32;
            if(s[j] >=65 && s[j]<=90) s[j]+=32;
            // cout<<s[i]<<" "<<s[j]<<endl;
            if(s[i]  != s[j]) return false;
            i++;
            j--;
            
            
        }
        return true;
    }
};
