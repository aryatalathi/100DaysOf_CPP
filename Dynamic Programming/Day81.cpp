#include <bits/stdc++.h>
using namespace std;

class Solution{

	public:
	int findMinCost(string X, string Y, int costX, int costY)
	{
	    int n = X.size();
        int m = Y.size();
        
        vector<vector<int> > dp(n + 1, vector<int> (m + 1));
        
        for (int i = 0; i <= n; i++) 
        {
            for (int j = 0; j <= m; j++) 
            {
                if (i == 0 or j == 0) 
                {
                    dp[i][j] = 0;
                    continue;
                }

                if (X[i - 1] == Y[j - 1]) 
                {
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                }
                else
                {
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }

        return costX * (n - dp[n][m]) + costY * (m - dp[n][m]);
	}
  

};
	
int main() 
{
   
   	int t;
    cin >> t;
    while (t--)
    {
       	string x, y;
       	cin >> x >> y;
        
       	int costX, costY;
       	cin >> costX >> costY;

        

        Solution ob;
        cout << ob.findMinCost(x, y, costX, costY);
	    cout << "\n";
	     
    }
    return 0;
}
