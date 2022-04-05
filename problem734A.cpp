
// https://codeforces.com/contest/734/problem/A

#include <bits/stdc++.h>
using namespace std;
#define long long int

void solve()
{
    int n; cin >>n;
    string s; cin>>s;
    int a=0;
    int d=0;
    for (int i = 0; i < n; ++i)
    {
        if(s[i]=='A')
            a++;
         else
            d++;
    }
    cout << (a==d?"Friendship":(a>d?"Anton":"Danik"));
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