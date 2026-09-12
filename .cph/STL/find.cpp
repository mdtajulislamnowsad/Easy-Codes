#include <bits/stdc++.h>
using namespace std;
int par[1005];
int sz[1005];

int find(int val){

    if(par[val]==-1)
        return val;
    int leader = find(par[val]);
    par[val] = leader;
    return leader;
}

void dsu_union (int val1,int val2){
    int leader1 = find(val1);
    int leader2 = find(val2);
    if(sz[leader1] > sz[leader2]){
        par[leader2] = leader1;
        sz[leader1] += sz[leader2];
    }
    else{
        par[leader1] = leader2;
        sz[leader2] += sz[leader1];
    }
}

int main() {
    memset(par,-1,sizeof(par));
    memset(sz,1,sizeof(sz));
    
    dsu_union(1,2);
    
    cout << find(4) << endl;
    for (int i = 0; i < 6; i++)
    {
        cout << i << " -> " << par[i] <<endl;
    }
    
    return 0;
}