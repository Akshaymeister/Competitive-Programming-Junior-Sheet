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
 int a[n];
 int i;
 int p=0,m=0,pe=0;
 rep(i,n)
 {
  cin>>a[i];
  if(a[i]==1)p++;
  if(a[i]==2)m++;
  if(a[i]==3)pe++;
 }
 int sm=min(p,min(m,pe));
 cout<<sm<<endl;
 int pi[p],mi[m],pei[pe];
 if(p!=0 || m!=0 ||pe!=0)
 {
  int p1=0,q=0,r=0;
  i=0;
  rep(i,n)
  {
    if(a[i]==1)
      pi[p1++]=i+1;
    if(a[i]==2)
      mi[q++]=i+1;
    if(a[i]==3)
      pei[r++]=i+1;
  }
 }
 int j;
 rep(j,sm)
  cout<<pi[j]<<' '<<mi[j]<<' '<<pei[j]<<endl;
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
