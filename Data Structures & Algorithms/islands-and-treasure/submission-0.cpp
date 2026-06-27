class Solution {
public:
    vector<pair<int,int>> direction = {{0,1}, {0,-1}, {-1,0}, {1,0}};
    void bfs(vector<vector<int>>& grid, int i, int j, int r, int c)
    {
        queue<pair<int,int>> q;
        q.push({i,j});
        while(!q.empty()){
            auto p = q.front();
            q.pop();
            for(int k=0;k<4;k++){
                int x = p.first + direction[k].first;
                int y = p.second + direction[k].second;
                if(x>=0 && x<r && y>=0 && y<c && grid[x][y]!=-1 && grid[x][y]!=0 && grid[x][y]>(grid[p.first][p.second]+1)){
                    grid[x][y] = grid[p.first][p.second]+1;
                    q.push({x,y});
                }
            }
        }
    }
    void islandsAndTreasure(vector<vector<int>>& grid) {
        int r = grid.size();
        int c = grid[0].size();

        for(int i=0;i<r; i++){
            for(int j=0;j<c;j++){
                if(grid[i][j]==0)
                    bfs(grid, i, j, r, c);
            }
        }

        return;
    }
};
