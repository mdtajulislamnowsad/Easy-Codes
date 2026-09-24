class Solution {
public:
    int count;
    bool vis[105][105];
    vector<pair<int,int>> d = {{0,1},{0,-1},{1,0},{-1,0}};
    int n,m;

    bool valid(int i,int j){

        if(i<0 || i >=n || j<0 || j>=m)
            return false;
        return true; 
    }
    void dfs(int i,int j,vector<vector<int>>& grid){
        vis[i][j] = true;
        for(int k=0; k<4;k++){
                int ci = i + d[k].first;
                int cj = j + d[k].second;
                if(valid(ci,cj) == false)
                    count ++;
                else if(valid(ci,cj)==true && grid[ci][cj] == 0)
                    count++;
                else if(valid(ci,cj)==true && !vis[ci][cj] && grid[ci][cj] == 1)
                    dfs(ci,cj,grid);
        }
    }

    int islandPerimeter(vector<vector<int>>& grid) {
        count = 0;
        n = grid.size();
        m = grid[0].size();
        memset(vis,false,sizeof(vis));

        for(int i=0;i<n;i++){
            for(int j=0; j<m; j++){
                if(!vis[i][j] && grid[i][j] == 1){
                    dfs(i,j,grid);
                }
            }
        }

        return count;

    }
};