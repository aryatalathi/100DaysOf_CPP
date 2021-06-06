#include<bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    string reverseWords (string s)
    {
        string ans="";
        stack<char> st;
        int i = 0;
        while(i<s.size())
        {
           if(s[i]=='.')
           {
               while(!st.empty())
               {
                   char x = st.top();
                   st.pop();
                   ans += x;
               }
               ans += '.';
           }
           else
           {
               st.push(s[i]);
           }
           i++;
        }
        while(!st.empty())
               {
                   char x = st.top();
                   st.pop();
                   ans += x;
               }
        return ans;
        
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout << ob.reverseWords (s) << endl;
    }
    return 0;
}
