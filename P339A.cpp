//Author: Akshay

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i,n) for (i = 0; i < n; ++i)
#define REP(i,k,n) for (i = k; i <= n; ++i)
#define REPR(i,k,n) for (i = k; i >= n; --i)

void solve()
{
  string s;cin>>s;
  int a[s.size()];
  int i;int j=0;
  rep(i,s.size())
  {
    if(isdigit(s[i]))
    {
      a[j]=s[i]-48;
      j++;
    }
  }
  sort(a,a+j);
  i=0;
  rep(i,j-1)
  {
    cout<<a[i]<<'+';
  }
  cout<<a[j-1];
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
