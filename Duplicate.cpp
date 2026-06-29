#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < n-j-1; i++)
        {
            cout << " ";
        }
        cout << "*";

        for (int i = 0; i < j*2-1; i++)
        {
            cout << " ";
        }
        if(j!=0){
            cout << "*";
        }
                
        cout << endl;
        
    }

    for (int j = 0; j < n-1; j++)
    {
        for (int i = 0; i < j+1; i++)
        {
            cout << " ";
        }
        cout << "*";

        for (int i = 0; i < 2*(n-j)-5; i++)
        {
            cout << " ";
        }
        if(j != n-2){
            cout << "*";
        }

        cout << endl;

    }
    


    
    return 0;
}