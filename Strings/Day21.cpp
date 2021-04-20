#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    string s1,s2;cin>>s1>>s2;
	    int n=s1.size(),m=s2.size();
	    int dp[n+1][m+1];
	    for(int i=0;i<=n;i++){
	        for(int j=0;j<=m;j++){
	            if(i==0 || j==0)
	            dp[i][j]=0;
	            else if(s1[i-1]==s2[j-1])
	            dp[i][j]=1+dp[i-1][j-1];
	            else 
	            dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
	        }
	    }
	    int l_lcs=dp[n][m];
	    cout<<n+m-2*l_lcs+l_lcs<<endl;
	}
	return 0;
}
