class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        
        int increase_array=false;
        if(digits[n-1] == 9)
        {
            // digits[n-1]=0;
            for(int i=n -1; i>=0; i--)
            {
                if(digits[i] == 9)
                {
                    digits[i]=0;
                    if(i == 0) increase_array = true;
                }
                    
                else if(digits[i] < 9)
                {
                    digits[i]=digits[i]+1;
                    break;
                }
                    
            }
            if(increase_array == true)
            {
                digits.push_back(1);
                int arr_newSize = digits.size();
                for(int i=arr_newSize - 1; i>0; i--)
                {
                    swap(digits[i],digits[i-1]);
                }
            }
        }
        else
        {
            digits[n-1]=digits[n-1]+1;
        }
        return digits;
        
    }
};
