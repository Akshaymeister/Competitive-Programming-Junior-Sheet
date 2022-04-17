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
  int n; cin>>n;
  vector <int> a;
  int i;int p=0;int q=0;
  rep(i,n)
  {
    int x; cin>>x;
    a.emplace_back(x);
  }
  sort(a.begin(),a.end());
  p=count(a.begin(),a.end(),a[0]);
  q=count(a.begin(),a.end(),a[n-1]);
  if(p==n)cout<<0;
  else cout<<n-p-q; 
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
