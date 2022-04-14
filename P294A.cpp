//Author: Akshay

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i,n) for (i = 0; i < n; ++i)
#define REP(i,k,n) for (i = k; i <= n; ++i)
#define REPR(i,k,n) for (i = k; i >= n; --i)

void solve()
{
  int n; cin>>n;
  int a[n];
  int i;
  rep(i,n) cin>>a[i];
  int m;cin>>m;
  int j;
  rep(j,m)
  {
    int x,y; cin>>x>>y;
    int t=x-1;
    if(t-1>=0){
      a[t-1]=a[t-1]+y-1;
      a[t]=a[t]-y; 
    }
    else
    {
      a[t]=a[t]-y;
    }
    if(t+1<n)
    {
      a[t+1]=a[t+1]+a[t];
      a[t]=a[t]-a[t];
    }
    else
    {
      a[t]-=a[t];
    }
  }
  i=0;
  rep(i,n)cout<<a[i]<<'\n';
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
