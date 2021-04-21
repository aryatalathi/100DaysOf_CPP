#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;
  for(int i=1; i<=n; i++)
  {
    string s, t;
    bool flag;
    cin>>s;
    cin>>t;
    
    flag = true;
    int n1 = s.size();
    int n2 = t.size();
    
    if(n1!=n2)
      flag = false;
      
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    
    for(int i=0; i<=n1; i++)
    {
      if (s[i] != t[i]) 
        flag = false;
    }
    
    if(flag==false)
      cout<<"NO"<<endl;
    else
      cout<<"YES"<<endl;
    
  }
  
  return 0;
}

    
  
