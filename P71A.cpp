//Author: Akshay

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i,n) for (i = 0; i < n; ++i)
#define REP(i,k,n) for (i = k; i <= n; ++i)
#define REPR(i,k,n) for (i = k; i >= n; --i)

void solve()
{ 
  int n;cin>>n;
  int i;
  rep(i,n)
  {
  string s; cin>>s;
  int n=s.size()-2;
  if(s.size()<=10)
    cout<<s<<'\n';
  else
  cout<<s[0]<<n<<s[s.size()-1]<<'\n';
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
