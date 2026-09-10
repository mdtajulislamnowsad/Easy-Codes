#include <bits/stdc++.h>
using namespace std;
char grid[105][105]; 
bool vis [105][105];
int dstnc[105][105];
vector<pair<int,int>> mv = {{-1,0},{1,0},{0,-1},{0,1}};
int n,e;

bool valid(int i,int j){
    if(i<0 || i >= n || j<0 || j>=e)
        return false;
    return true;

}


void bfs(int si, int sj){

    queue <pair<int,int>> q;
    q.push({si,sj});
    dstnc[si][sj]=0;
    vis[si][sj] = true;

    while (!q.empty())
    {
        pair<int,int> par = q.front();
        q.pop();

        // cout <<par.first <<" " <<par.second<<endl;
        for (int i = 0;i<4;i++)
        {
            int ci = par.first + mv[i].first;
            int cj = par.second + mv[i].second;

            if(valid(ci,cj) && !vis[ci][cj]){
                q.push({ci,cj});
                vis[ci][cj] = true;
                dstnc[ci][cj]= dstnc[par.first][par.second] + 1;
            }
        }
        
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
    int si,sj,di,dj;
    cin >> si >> sj >> di >> dj;

    memset(vis,false,sizeof(vis));
    memset(dstnc,-1,sizeof(dstnc));
    bfs(si,sj);

    cout << dstnc[di][dj] ;
    return 0;
}