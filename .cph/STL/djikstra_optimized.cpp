#include <bits/stdc++.h>
using namespace std;
vector<pair<int,int>> adj_list[1005];
int dst[105];

void dijkstra(int src){
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
    pq.push({0,src});
    dst[src] = 0;

    while (!pq.empty())
    {
        pair<int,int> par = pq.top();
        pq.pop();
        int par_node = par.second;
        int par_dst = par.first;

        for (auto child : adj_list[par_node])
        {
            int child_node = child.first;
            int child_dst = child.second;

            if(par_dst + child_dst < dst[child_node]){
                dst[child_node] = par_dst + child_dst;
                pq.push({dst[child_node],child_node});

            }
        }
    }
}

int main() {
    int n,e;
    cin >> n>>e;

    while (e--)
    {
        int a,b,c;
        cin >> a >> b >> c;
        adj_list[a].push_back({b,c});
        adj_list[b].push_back({a,c});
    }
    for (int i = 0; i < n; i++)
        dst[i]= INT_MAX;
    
    dijkstra(0);
    for (int i = 0; i < n; i++)
    {
        cout << i << " -> " << dst[i] << endl;
    }
    
    
    return 0;
}