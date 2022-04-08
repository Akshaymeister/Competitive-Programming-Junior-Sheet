#include <bits/stdc++.h>
using namespace std;
#define long long int

void solve()
{
  string s,t; cin>>s>>t;
  int i=0,j=0;
  while(i<s.size() && j<t.size())
  {
    if(s[i]==t[j])
    {
      i++;
    }
    j++;
  }
  cout<<i+1;
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
