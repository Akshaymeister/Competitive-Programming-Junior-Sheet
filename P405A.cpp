#include <bits/stdc++.h>
using namespace std;
#define long long int

void solve()
{
	int n; cin>>n;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
			cin>>a[i];
	}
	 sort(a,a+n);
	 for (int i = 0; i < n; ++i)
	 {
	 		cout<<a[i]<<' ';
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