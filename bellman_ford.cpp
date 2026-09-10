#include <bits/stdc++.h>
using namespace std;
int dst[1005];
int n,e;
class edge{
    public:
    int a,b,c;
    edge(int a,int b,int c){
        this->a = a;
        this->b = b;
        this->c = c;
    }
};


int main() {
    
    cin >> n >>e;
    vector<edge> edge_list;
    while (e--)
    {
        int a,b,c;
        cin>>a >> b >>c;
        edge_list.push_back(edge(a,b,c));
    }
    for (int i = 0; i < n; i++)
    {
        dst[i]= INT_MAX;
    }
    dst[0]=0;

    for (int i = 0; i < n-1; i++)
    {
        for (auto ed :edge_list){
        int a,b,c;
        a =ed.a;
        b =ed.b;
        c =ed.c;
        if(dst[a]!=INT_MAX && dst[a]+c<dst[b])
            dst[b] = dst[a]+c;
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<< i <<" -> " <<dst[i]<<endl;
    }
    
    
    
    
    return 0;
}