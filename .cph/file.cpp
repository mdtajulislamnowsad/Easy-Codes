#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int x,y;
        cin >> x >> y;
        int count = x-y;

        int ans = 0;
        for (int i = 0; i < count; i++)
        {
            ans =ans + x-i;
        }
        
        cout << ans <<endl;
    }
    
    return 0;
}