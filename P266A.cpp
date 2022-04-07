#include <bits/stdc++.h>
using namespace std;
#define long long int

void solve()
{
  int n; cin>>n;
 string s; cin>>s;
 char temp=s[0];
 int c=0;
 for (int i = 1; i < s.size(); i++)
 {
    if(s[i]==temp)
      c++;
      temp=s[i];
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

