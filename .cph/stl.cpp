#include <bits/stdc++.h>
using namespace std;

int main() {
    
    list<int> l = {10,50,20,30,20,40,50,10};
    // l.remove(10);
    l.sort();
    for ( int val : l)
    {
        cout<< val <<" ";
    }
    
    return 0;
}