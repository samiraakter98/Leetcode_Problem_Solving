class Solution {
public:
    int mySqrt(int x) {
        int counter=0;
        long int odd_add=1;
        long int square=0;
        for(odd_add = 1;;odd_add+=2)
        {
            if(x == square) return counter;
            else if(x < square)  break;
            square +=odd_add;
            counter++;
            
        }
        return counter-1;
    }
};
