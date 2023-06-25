class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int count=0;
        for(int i=0; i<gas.size(); i++)
        {
            count+=gas[i] - cost[i];

        }
        if(count < 0) return -1;
        count=0;
        int id = 0;
        for(int i=0; i<gas.size();i++)
        {
            int diff = gas[i]-cost[i];
            count +=diff;
            if(count < 0)
            {
                count = 0;
                id = i+1;
                cout<<id<<" ";
                
            }

        }
        return id;
    }
};
