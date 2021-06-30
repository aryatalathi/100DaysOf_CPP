#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int minCost(int N, vector<int> cost[]) 
    {
        int dp[N][3];
        for(int i=0; i<3; i++)
            dp[0][i] = cost[0][i];
        for(int i=1; i<N; i++) 
        {
            for(int j=0; j<3; j++)
            {
                if(j==0)
                    dp[i][j] = cost[i][j] + min(dp[i-1][1],dp[i-1][2]);
                else if(j==1)
                    dp[i][j] = cost[i][j] + min(dp[i-1][0],dp[i-1][2]);
                else
                    dp[i][j] = cost[i][j] + min(dp[i-1][0],dp[i-1][1]);
            }
        }
        return min(dp[N-1][0], min(dp[N-1][1], dp[N-1][2]));       
    }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<int> cost[N];
        int x, y, z;
        for(int i = 0;i < N;i++){
            cin>>x>>y>>z;
            cost[i].push_back(x);
            cost[i].push_back(y);
            cost[i].push_back(z);
        }
        
        Solution ob;
        cout<<ob.minCost(N, cost)<<"\n";
    }
    return 0;
}
