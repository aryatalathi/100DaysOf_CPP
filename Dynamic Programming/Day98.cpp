#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    long long optimalWalk(long long N, long long A, long long B)
    {
        long long dp[100005];
        dp[0] = 0;
        dp[1] = A;
        
        for(int i=2; i<=N; i++)
        {
            dp[i] = min(A+dp[i-1], dp[(i+1)/2]+B+(i%2)*A);
        }
        
        return dp[N]; 
    }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        long long N, A, B;
        cin>>N>>A>>B;
        
        Solution ob;
        cout<<ob.optimalWalk(N, A, B)<<"\n";
    }
    return 0;
}
