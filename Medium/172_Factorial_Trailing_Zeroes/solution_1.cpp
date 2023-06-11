class Solution {
public:
    int fives(int x)
    {
        int count=0;
        while(x)
        {
            if(x%5 ==0) count++;
            else break;
            x=x/5;
        }
        return count;
    }
    int trailingZeroes(int n) {
        int five=0;
        while(n)
        {
           if(n%5==0)
           {
               five +=fives(n);
           }
            n--;
            
        }
        return five;
    }
};
