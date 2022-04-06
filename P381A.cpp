#include <bits/stdc++.h>
using namespace std;
#define long long int

void solve()
{
	int n; cin>>n;
	int a[n];
	int s=0,d=0;
	int flag=0;
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	int k=0;int p=n-1;
	while(k!=p)
	{
		if(flag==0)
		{
			if(a[k]>a[p])
			{
				s+=a[k];
				k++;
		  }
		  else
		  {
		  	s+=a[p];
		  	p--;
		  }
		  flag=1;
		}
		else
		{
				if(a[k]>a[p])
			{
				d+=a[k];
				k++;
		  }
		  else
		  {
		  	d+=a[p];
		  	p--;
		  }
		  flag=0;
		}
	}
	if(flag==0)
		s+=a[p];
	else
		d+=a[p];
	 	cout<<s<<' '<<d;
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
