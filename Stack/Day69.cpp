#include<bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    string reverseEqn (string s)
        {
            stack<string> st;
        
        for(int i = 0; i < s.size(); i++)
        {
            if(isdigit(s[i]))
            {
                string res = "";
                res += s[i];
                
                while(i+1 < s.size() && isdigit(s[i+1]))
                {
                    res += s[i+1];
                    
                    i++;
                }
                
                st.push(res);
            }
            else
            {
                string res = "";
                res += s[i];
                
                st.push(res);
            }
        }
        
        string eq = "";
        
        while(!st.empty())
        {
            eq += st.top();
            st.pop();
        }
        
        return eq;
            
        }
};

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout <<ob.reverseEqn (s) << endl;
    }
}
