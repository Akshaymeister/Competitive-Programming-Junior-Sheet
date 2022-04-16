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
 int i,n; cin>>n;
 unordered_map <int,bool> a;
 int p=n;
 rep(i,n)
 {
  int x;cin>>x;
  a[x]=true;
  while(p>0 && a[p])
  {
    cout<<p<<' ';
    --p;
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
