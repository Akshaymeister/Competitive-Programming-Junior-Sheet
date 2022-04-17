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
  int i;int sum=0;int p=0;int q=0;
  rep(i,n)
  {
    int x; cin>>x;
    a.emplace_back(x);
    sum=sum+a[i];
  }
  sort(a.rbegin(),a.rend());
  for(auto it : a)
  {
   q=q+it;
   p++;
   if(q>sum/2)
     break;
  }
  cout<<p;
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