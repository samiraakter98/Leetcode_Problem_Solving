class Solution {
public:
    int lengthOfLastWord(string s) {
       int len = s.length();
       int sz=0;
       for(int i=len-1; i>=0; i--)
       {
           if(s[i] != ' ') 
           {
               while(s[i] != ' ')
               {
                   sz++;
                   i--;
                   if( i<0) break;
               }
               break;
           }

       } 
    
        return sz;
    }
};
