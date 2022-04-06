#include <bits/stdc++.h>
using namespace std;
#define long long int

void solve()
{
	int n; cin>>n;
	int a[n];
	int flag=0;
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	for (int i = 0; i < n; ++i)
	{
		if(a[i]!=a[i+1])
			flag+=1;
	}
	cout<<flag;
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
