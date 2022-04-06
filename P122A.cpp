#include <bits/stdc++.h>
using namespace std;
#define long long int

void solve()
{
	string a,b; cin>>a>>b;
	transform(a.begin(),a.end(),a.begin(),::toupper);
	transform(b.begin(),b.end(),b.begin(),::toupper);
	int x=a.compare(b);

	cout<<(x==0?0:(x>0?1:-1));

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
