class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> result;
        int row=0;
        int col =0;  
        bool right=false,left=false,down=false,up=false;
        right=true;
        bool pointer = true;
        int n=matrix.size();
        int m=matrix[0].size();
        while(right || left || down || up)
        {
            if(row<n && col <m &&matrix[row][col] != INT_MAX)
            {
                cout<<matrix[row][col]<<" ";
                result.push_back(matrix[row][col]);
                matrix[row][col]=INT_MAX;
            }
            else
            {
                bool flag1=false,flag2=false,flag3=false,flag4=false;
                if(right)
                {
                    if(col+1 < m && matrix[row][col+1] != INT_MAX)
                    {
                        col++;
                    }
                    else{down = true; right=false;flag1=true;}
                }
                if(down)
                {
                    if(row+1 < n && matrix[row+1][col] != INT_MAX)
                    {
                        row++;
                    }
                    else{down = false; left=true;flag2=true;}
                }
                if(left)
                {
                    if(col-1 >=0 && matrix[row][col-1] != INT_MAX)
                    {
                        col--;
                    }
                    else{left = false; up=true;flag3=true;}
                }
                if(up)
                {
                    if(row-1 >= 0 && matrix[row-1][col] != INT_MAX)
                    {
                        row--;
                    }
                    else{up = false; right=true;flag4=true;}
                } 
                if(flag1 && flag2 && flag3 && flag4) 
                {
                    right=up=left=down=false;
                }       
           
            }     
        }
        return result;
    }
};
