
//https://codeforces.com/problemset/problem/275/A

#include <bits/stdc++.h>
using namespace std;
#define long long int
 
void solve()
{
    int a[3][3];
    int sum=0;
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            cin>>a[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        
        for (int j = 0; j < 3; j++)
        {
            sum=0;
            sum+=a[i][j];
            if(i-1>=0)
                sum+=a[i-1][j];
            if(i+1<3)
                sum+=a[i+1][j];
            if(j-1>=0)
                sum+=a[i][j-1];
            if(j+1<3)
                sum+=a[i][j+1];
        if(sum%2==0)
            cout<<1;
        else
            cout<<0;
        }
        cout<<'\n';
    }
 
}
signed main()
{  
    ios_base::sync_with_stdio(false);
    cin.tie(0);
 
    int t=1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}
