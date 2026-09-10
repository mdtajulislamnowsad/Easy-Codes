#include <bits/stdc++.h>
using namespace std;
char grid[105][105]; 
bool vis [105][105];
vector<pair<int,int>> mv = {{-1,0},{1,0},{0,-1},{0,1}};
int n,e;

bool valid(int i,int j){
    if(i<0 || i >= n || j<0 || j>=e)
        return false;
    return true;

}


void dfs(int si,int sj){

    cout<<si <<" "<<sj <<endl;

    vis[si][sj] = true;

    for (int i = 0; i < 4; i++)
    {
        int ci,cj;
        ci =si + mv[i].first;
        cj =sj + mv[i].second;
        if(!vis[ci][cj] && valid(ci,cj))
            dfs(ci,cj);
    }
    
}

int main() {
    
    cin >> n >> e;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < e; j++)
        {
            cin >> grid[i][j];
        }
        
    }

    int si,sj;
    cin >> si >> sj;

    memset(vis,false,sizeof(vis));
    dfs(si,sj);
    return 0;
}