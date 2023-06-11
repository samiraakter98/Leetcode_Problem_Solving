class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        unsigned int y=0;
        int z=x;
        while(z!=0)
        {
            y=y*10+z%10;

            z=z/10;
        }
        // cout<<y<<endl;
        if( x==y) return true;
        else return false;
    }
};
