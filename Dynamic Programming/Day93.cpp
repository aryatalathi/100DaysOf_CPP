#include <bits/stdc++.h>
using namespace std;
 
class Solution
{
    public:
    int subsequenceCount(string S, string T)
    {
        int n = S.size();
        int m = T.size();
        
        int dp[n+1][m+1];
        
        for(int j=0; j<=m; j++)
        {
            dp[0][j] = 0;
        }
        
        for(int i=0; i<=n; i++)
        {
            dp[i][0] = 1;
        }
        
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=m; j++)
            {
                if(S[i-1] == T[j-1])
                {
                    dp[i][j] = (dp[i-1][j-1] + dp[i-1][j]) % 1000000007;
                }
                else
                {
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
        return dp[n][m];   
    }
};
 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string tt;
		cin>>s;
		cin>>tt;
		
		Solution ob;
		cout<<ob.subsequenceCount(s,tt)<<endl;		
	}
}
