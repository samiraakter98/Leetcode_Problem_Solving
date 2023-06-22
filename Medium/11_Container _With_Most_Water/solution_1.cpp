class Solution {
public:
    int maxArea(vector<int>& height) {
        int area=0;
        int left =0;
        int right = height.size()-1;
        while(left<right)
        {
            int temp = (right - left)*min(height[left],height[right]);
            if(temp >area) area =  temp;
            if(height[left] < height[right]) left++;
            else if(height[left] > height[right]) right--;
            else {left++,right--;}

        }
        return area;
    }
};
