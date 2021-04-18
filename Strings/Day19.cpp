#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t, i, count=0;
  string s;
  cin>>t;
  for(i=1; i<=t; i++)
  {
    cin>>s;
    int n = s.size();
    for(i=0; i<n; i++)
    {
      if(i%2==0)
      {
        if(s[i]!='W')
          count++;
      }
      else
      {
        if(s[i]!='B')
          count++;
      }
    }
    int ans = min(count, n-count);
    cout<<ans<<endl;
  }
  
  return 0;
}




