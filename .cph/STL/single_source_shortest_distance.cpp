#include <bits/stdc++.h>
using namespace std;

vector<int> adj_list[1005];
bool vistd[1005];
int level[1005];
void bfs(int src){

    queue<int>q;
    q.push(src);
    vistd[src] =  true;
    level[src] = 0;

    while (!q.empty())
    {
        int prnt = q.front();
        q.pop();
        for (int child : adj_list[prnt])
        {
            if(vistd[child] == false ){
                q.push(child);
                vistd[child] =  true;
                level[child] = level[prnt] + 1;
            }
        }
    }
    
}
 
int main() {
    int n,e;
    cin >> n >> e;    

    while (e--)
    {
        int a,b;
        cin >> a >> b;

        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    memset(vistd,false,sizeof(vistd));
    memset(level ,-1,sizeof(level));

    int src,dst;
    cin >> src >> dst;
    bfs(src);

    cout << level[dst] << endl; 
    
    

    return 0;
}