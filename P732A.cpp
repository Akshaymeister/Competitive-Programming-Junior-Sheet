#include <bits/stdc++.h>
using namespace std;
#define long long int

void solve()
{
 int k,r; cin>>k>>r;
 for (int i = 1; i < 10; ++i)
 {
  if((k*i)%10==r || (k*i)%10==0)
   {
    cout<<i;
    break;
  }
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
