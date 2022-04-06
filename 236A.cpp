#include <bits/stdc++.h>
using namespace std;
#define long long int

void solve(string str)
{
	unordered_set<char>s;
	for (int i = 0; i <str.size(); ++i)
	{
		s.insert(str[i]);
	}
		cout<<((s.size()%2==0)?"CHAT WITH HER!":"IGNORE HIM!");
}
signed main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
  int t=1;
		// cin >> t;
	while (t--)
	{
		string str; cin>>str;
		solve(str);
	}
}
