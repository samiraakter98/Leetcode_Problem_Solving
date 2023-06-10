class Solution {
public:
    int sum_(int x)
    {
        int sum =0;
        while(x !=0)
        {
            int last = x%10;
            x=x/10;
            sum+=last*last;
        }
        return sum;
    }
    bool isHappy(int n) {
        unordered_map<int,int> m;
        while(m.find(n) == m.end())
        {
            if(n == 1) return true;
            m[n] = 1;
            n = sum_(n);
            cout<<n<<" ";
        }
        return false;
    }
};
