#include <bits/stdc++.h>
using namespace std;
#define long long int

void solve()
{
   int a,b;  cin>>a>>b;
   int years=0;
   while(a<=b)
   {
     a*=3;
     b*=2;
     years++;
   }
   cout<<years;
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