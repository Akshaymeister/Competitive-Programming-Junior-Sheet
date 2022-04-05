
// codeforces link -- https://codeforces.com/contest/677/problem/A


#include <bits/stdc++.h>
using namespace std;
#define long long int

void solve()
{
int n,h; cin>>n>>h;
int sum=0;
int arr[n];
for (int i = 0; i < n; ++i)
    {
       cin>>arr[i];
       if(arr[i]>h)
            sum+=2;
        else
            sum+=1;
    }
    cout<<sum;
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