#include <bits/stdc++.h>
using namespace std;
#define long long int

void solve()
{
  int x,y; cin>>x>>y;
  int ans=6-max(x,y)+1;
  int g=__gcd(ans,6);
  cout<<ans/g<<'/'<<6/g;
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
