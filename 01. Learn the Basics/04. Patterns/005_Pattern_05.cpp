// * * * * * 
// * * * * 
// * * * 
// * * 
// *

#include<bits/stdc++.h>
using namespace std;

void solve()  {
    int n;
    cin>>n;
    for(int i=0; i<n; i++)  {
        for(int j=0; j<=n-i-1; j++)  {
            cout<<"* ";
        }
        cout<<"\n";
    }
}

int main()  {
    solve();
    return 0;
}