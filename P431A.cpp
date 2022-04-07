#include <bits/stdc++.h>
using namespace std;
#define long long int

void solve()
{
  int a[4];
  for (int i = 0; i < 4; i++)
  {
    cin>>a[i];
  }
  string s;cin>>s;
  int c=0;
  for (int i = 0; i < s.size(); i++)
  {
    int temp=int(s[i])-49;
    c= c+ a[temp];
  }
  cout<<c;
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

