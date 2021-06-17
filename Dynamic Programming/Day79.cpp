#include <bits/stdc++.h>
using namespace std;

class Solution{
		

	public:
	int minOperations(string str1, string str2) 
	{ 
	    int n = str1.length();
        int m = str2.length();
        
        int dp[n + 1][m + 1];
        
        memset(dp, 0, sizeof(dp));
        
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= m; j++)
            {
                if(str1[i-1] == str2[j-1])
                {
                    dp[i][j] = 1 + dp[i-1][j-1];
                }
                else
                {
                    dp[i][j] = max(dp[i][j-1], dp[i-1][j]);
                }
            }
        }
        int lcs = dp[n][m];
        int insertions = m - lcs;
        int deletions = n -lcs;
        return (insertions + deletions);
	} 
};

int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;

	    Solution ob;
	    cout << ob.minOperations(s1, s2) << "\n";
	     
    }
    return 0;
}
