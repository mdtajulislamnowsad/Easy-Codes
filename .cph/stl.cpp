#include <bits/stdc++.h>
using namespace std;

int main() {
    
    list<int> l = {10,20,30,40,50,10};
    l.remove(10);
    for ( int val : l)
    {
        cout<< val <<" ";
    }
    
    return 0;
}