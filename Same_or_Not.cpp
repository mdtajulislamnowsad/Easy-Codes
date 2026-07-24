#include <bits/stdc++.h>
using namespace std;

int main() {
    int s,q;
    cin >> s >> q;
    vector<int>st;
    vector<int>qt;

    for (int i = 0; i < s; i++)
    {
        int x;
        cin >> x;
        st.push_back(x);
    }
    
    for (int i = 0; i < q; i++)
    {
        int x;
        cin >> x;
        qt.push_back(x);
    }

    

    if (s != q) {
        cout << "NO" << endl;
        return 0;
    }
    int triger = 1;

    
    while(!st.empty() && !qt.empty()){
        if(st.back() != qt.front()){
            triger = 0;
            break;
        }

        else{
            st.pop_back();
            qt.erase(qt.begin());
        }
    }

    cout << ((triger == 1)? "YES" : "NO");

    return 0;
}