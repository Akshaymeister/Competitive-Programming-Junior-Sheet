#include <bits/stdc++.h>
using namespace std;
#define long long int

void solve()
{
  int n; cin>>n;
  int h[n];
  int g[n];
  int ans=0;
  for (int i = 0; i < n; ++i)
  {
    cin>>h[i]>>g[i];
  }
  int i=0;
  while(i<n)
  {
    for (int k = 0; k < n; ++k)
  {
    if(h[i]==g[k])
      ans++;
  }   
   i++;
  }
  cout<<ans;
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
