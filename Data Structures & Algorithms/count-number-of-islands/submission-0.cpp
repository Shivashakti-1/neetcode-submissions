class Solution {
    private:
    void bfs(int row, int col, vector<vector<int>> &vis, vector<vector<char>> &grid)
    {
        int n=grid.size();
        int m=grid[0].size();
        vis[row][col]=1;

        queue<pair<int,int>> q;
        q.push({row,col});

        int delrow[] = {-1, 1, 0, 0};
        int delcol[] = {0, 0, -1, 1};

        while(!q.empty())
        {
            int row=q.front().first;
            int col=q.front().second;
            q.pop();
            for(int i=0;i<4;i++)
            {
                int nrow = row + delrow[i];
                int mcol = col + delcol[i];
                if(nrow>=0 && nrow<n && mcol>=0 && mcol<m &&
                !vis[nrow][mcol] && grid[nrow][mcol]=='1')
                {
                        vis[nrow][mcol]=1;
                        q.push({nrow,mcol});
                }
                
            }
        }

    }    
public:
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();

        vector<vector<int>> vis(n, vector<int>(m,0));

        int cnt=0;

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(!vis[i][j] && grid[i][j]=='1')
                {
                    cnt++;
                    bfs(i,j,vis,grid);
                }
            }
        }

        return cnt;
        
    }
};
