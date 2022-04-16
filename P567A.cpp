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
 int a[n];
 rep(i,n)cin>>a[i];
 cout<<abs(a[0]-a[1])<<' '<<abs(a[0]-a[n-1])<<'\n';
 REP(i,1,n-2)
 {
  cout<<min(abs(a[i]-a[i+1]),abs(a[i]-a[i-1]))<<' '<<max(abs(a[i]-a[n-1]),abs(a[i]-a[0]))<<'\n';
 }
 cout<<abs(a[n-1]-a[n-2])<<' '<<abs(a[n-1]-a[0])<<'\n';
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
