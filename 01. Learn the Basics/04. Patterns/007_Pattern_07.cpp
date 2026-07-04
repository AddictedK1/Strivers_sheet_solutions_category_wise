//     *
//    ***
//   *****
//  *******
// *********

#include<bits/stdc++.h>
using namespace std;

void solve()  {
    int n;
    cin>>n;
    for(int i=1; i<=n; i++) {
        for(int j=0; j<=n-i-1; j++)  {
            cout<<" ";
        }
        for(int j=1; j<=i+(i-1); j++)  {
            cout<<"*";
        }
        cout<<endl;
    }
}

int main()  {
    solve();
    return 0;
}