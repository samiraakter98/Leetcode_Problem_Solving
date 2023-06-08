class Solution {
public:
    int strStr(string haystack, string needle) {
        int h = haystack.length();
        int n= needle.length();
        int k=0;
        int flag=false;
        for(int j=0; j< h; j++)
        {
            if(haystack[j] != needle[k]) continue;
            else if((j+n) > h) break;
            else
            {
                int flag = true;
                for(int p=j; p<j+n; p++)
                {
                    if(haystack[p] != needle[p-j]) 
                    {
                        flag = false;
                        break;
                    }
                    // k++;
                }
                if(flag == true) return j;
                k=0;
            }
        }
        return -1;
    }
};
