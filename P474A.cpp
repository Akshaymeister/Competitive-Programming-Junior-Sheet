//Author: Akshay

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define rep(i,n) for (i = 0; i < n; ++i)
#define REP(i,k,n) for (i = k; i <= n; ++i)
#define REPR(i,k,n) for (i = k; i >= n; --i)

void solve()
{
  char c;cin>>c;
  string s;cin>>s;
  int i,j;
  string key= {"qwertyuiopasdfghjkl;zxcvbnm,./"};
  rep(i,s.size())
  {
    rep(j,key.size())
    {
      if(s[i]==key[j])
      {
        if(c=='R')
          cout<<key[j-1];
        else
          cout<<key[j+1];
      }
    }
  }
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
