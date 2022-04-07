#include <bits/stdc++.h>
using namespace std;
#define long long int

void solve()
{
  string s; cin>>s;
  int c= 97;
  int ans=0;
  for (int i = 0; i < s.size(); ++i)  
  {
    int temp=(int)s[i];
    if(abs(temp-c)>13)
      ans = ans + (26-abs(temp-c));
    else
      ans=ans + abs(temp-c);
    c=(int)s[i];
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
