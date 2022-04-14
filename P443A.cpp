//Author: Akshay

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i,n) for (i = 0; i < n; ++i)
#define REP(i,k,n) for (i = k; i <= n; ++i)
#define REPR(i,k,n) for (i = k; i >= n; --i)

void solve()
{ 
  string s;    // use getline in this instead of cin to input after mult spaces
  getline(cin,s);
  unordered_set <char> ch;
   for (int i = 0; i < s.size(); ++i)
   {
     if(isalpha(s[i]))
      ch.insert(s[i]);
   }
   cout<<ch.size();
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
