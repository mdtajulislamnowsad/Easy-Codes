#include <bits/stdc++.h>
using namespace std;

int main() {
    
    list<int> l(10,8);
    for (auto i = l.begin(); i != l.end(); i++)
    {
        cout<<*l.begin()<<endl;
    }
    
    return 0;
}