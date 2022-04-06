#include <bits/stdc++.h>
using namespace std;
#define long long int

void solve()
{
	string s; cin>>s;
	int lc=0,uc=0;
	for (int i = 0; i < s.size(); ++i)
	{
		if(isupper(s[i]))
			uc++;
		else
			lc++;
	}
	if(lc>uc || lc==uc)
		transform(s.begin(),s.end(),s.begin(),::tolower);
	else
		transform(s.begin(),s.end(),s.begin(),::toupper);
	cout<<s;
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
