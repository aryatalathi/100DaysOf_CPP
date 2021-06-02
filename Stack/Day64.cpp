#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    int evaluatePostfix(string &S)
    {
        stack<int> st;
        for(int i=0; i<S.size(); i++)
        {
            if(S[i]>='0' && S[i]<='9')
            {
                st.push(S[i]-'0');
            }
            else
            {
                int n = st.top();
                st.pop();
                
                int m = st.top();
                st.pop();
                
                if(S[i]=='*')
                {
                    st.push(n*m);
                }
                else if(S[i] == '/')
                {
                    st.push(m/n);
                }
                else if(S[i] == '+')
                {
                    st.push(n+m);
                }
                else if(S[i] == '-')
                {
                    st.push(m-n);
                }
            }
        }
        return st.top();
    }
};

int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--)
    {
        string S;
        cin>>S;
        Solution obj;
    
    cout<<obj.evaluatePostfix(S)<<endl;
    }
    return 0;
}
