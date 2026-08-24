#include <bits/stdc++.h>
using namespace std;

vector<int> adj_list[1005];

bool vistd[1005];

void bfs(int src){

    queue<int>q;
    q.push(src);
    vistd[src] =  true;

    while (!q.empty())
    {
        int prnt = q.front();
        q.pop();

        cout << prnt << " ";

        for (int child : adj_list[prnt])
        {
            if(vistd[child] == false )
                q.push(child);
                vistd[child] =  true;
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
    bfs(0);
    
    return 0;
}