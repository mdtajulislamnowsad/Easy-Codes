#include <bits/stdc++.h>
using namespace std;

int main() {

    pair<int,bool>x;
    pair<int,int>y;
    pair<int,char>z;

    x = make_pair(10,true);
    y = make_pair(99,100);
    z = make_pair(745,'z');

    cout <<x.first <<" " <<x.second <<endl;
    cout <<y.first <<" " <<y.second <<endl;
    cout <<z.first <<" " <<z.second <<endl;
    return 0;
}