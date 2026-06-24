class Solution {
public:
    void dfs(vector<vector<char>>& grid, int i, int j, int r, int c){
        if(i<0 || i>=r || j<0 || j>=c || grid[i][j] == '0') return;

        grid[i][j] = '0';
        dfs(grid, i-1, j, r, c);
        dfs(grid, i+1, j, r, c);
        dfs(grid, i, j-1, r, c);
        dfs(grid, i, j+1, r, c);
    }
    int numIslands(vector<vector<char>>& grid) {
        int count = 0;
        int r = grid.size();
        int c = grid[0].size();
        
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(grid[i][j] == '1'){
                    count++;
                    dfs(grid, i, j, r, c);
                }
            }
        }
        return count;
    }
};
