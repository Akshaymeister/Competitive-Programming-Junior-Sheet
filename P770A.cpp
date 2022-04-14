//Author: Akshay

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define rep(i,n) for (i = 0; i < n; ++i)
#define REP(i,k,n) for (i = k; i <= n; ++i)
#define REPR(i,k,n) for (i = k; i >= n; --i)

void solve()
{
 int n,k,i; cin>>n>>k;
 rep(i,n) cout<<(char)('a'+(i%k));
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
