#include <bits/stdc++.h>
using namespace std;
#define long long int

void solve()
{
    int j,i;
   for (int i1 = 0; i1 < 25; ++i1)
   {
       int n;cin>>n;
       if(n==1)
        {
            i=i1/5;
            j=i1%5;
        }
   }
   cout<< ((abs(2-i)+abs(2-j)));
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