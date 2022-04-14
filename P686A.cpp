//Author: Akshay

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i,n) for (i = 0; i < n; ++i)
#define REP(i,k,n) for (i = k; i <= n; ++i)
#define REPR(i,k,n) for (i = k; i >= n; --i)

void solve()
{
  int n,x; cin>>n>>x;
  int dis=0;
  int i;
  rep(i,n)
  {
    char ch; cin>>ch;
    int d; cin>>d;
    if(ch=='+')
      x+=d;
    else
    {
      if(x>=d)
      x-=d;
      else
        dis++;
    }
  }
  cout<<x<<' '<<dis;
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
