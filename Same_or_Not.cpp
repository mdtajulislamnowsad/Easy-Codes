#include <bits/stdc++.h>
using namespace std;

int main() {
    int s,q;
    cin >> s >> q;
    stack<int>st;
    queue<int>qt;

    for (int i = 0; i < s; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    
    for (int i = 0; i < q; i++)
    {
        int x;
        cin >> x;
        qt.push(x);
    }

    int triger = 1;

    while(!st.empty() || !qt.empty()){
        if(st.top() != qt.front()){
            triger = 0;
            break;
        }

        else{
            st.pop();
            qt.pop();
        }
    }

    cout << ((triger == 1)? "YES" : "NO");

    return 0;
}