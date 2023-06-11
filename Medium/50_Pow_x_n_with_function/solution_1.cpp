class Solution {
public:
    double myPow(double x, int n) {
       double pow =1.0;
       while(n!=0) 
       {
           if(n%2 == 1 && n>0)
           {
               pow = pow*x;
           }
           else if(n%2 == -1 && n<0)
           {
               pow = pow/x;
           }
           x=x*x;
           n=n/2;
       }
       return pow;
    }
};
