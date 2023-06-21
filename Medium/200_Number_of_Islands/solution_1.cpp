class Solution {
public:
     void dfsVisit(int n,int m,int i, int j, vector<vector<char>>& grid)
     {
         
        //  if(i<n && j<m && i>=0&&j>=0 && grid[i][j]=='1' && !visited[i][j])
        //  {
        //      visited[i][j] = true;
        //     //  cout<<i<<" "<<j<<endl;
        //     visited = dfsVisit(n,m,i+1,j,visited, grid);
        //     visited = dfsVisit(n,m,i,j+1,visited, grid);
           
        //     visited = dfsVisit(n,m,i,j-1,visited, grid);
            
        //  }
        grid[i][j]='0';
         if(i!=0 && grid[i-1][j]=='1' )
         {
             
              dfsVisit(n,m,i-1,j,grid);
         }
         if(j!=0 && grid[i][j-1]=='1' )
         {
            //  visited[i][j] = true;
              dfsVisit(n,m,i,j-1,grid);
         }
         if(i!=n-1  && grid[i+1][j]=='1' )
         {
            //  visited[i][j] = true;
              dfsVisit(n,m,i+1,j, grid);
         }
         if(j != m-1 && grid[i][j+1]=='1' )
         {
            //  visited[i][j] = true;
               dfsVisit(n,m,i,j+1, grid);
         }
         return ;
         
     }
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<bool>> visited(n);
        for(int i=0; i<n; i++)
        {
            vector<bool> vect(m);
            for(int j=0; j<m; j++)
            {
                vect.push_back(false);
                visited[i]=vect;
            }
        }
        int count=0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(grid[i][j]=='1')
                {
                     dfsVisit(n,m,i, j, grid);
                    count++;
                }
  
            }
        }
        return count;
    }
};
