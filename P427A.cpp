#include <bits/stdc++.h>
using namespace std;
#define long long int

void solve()
{
  int n; cin >>n;
  int p=0,c=0;
  for (int i = 0; i < n; ++i)
  {
     int x; cin>>x;
     if(x>0)
     {
      p+=x;
     }
     else
     {
      if(p>0)
        p=p+x;
      else
        c++;
     }
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
