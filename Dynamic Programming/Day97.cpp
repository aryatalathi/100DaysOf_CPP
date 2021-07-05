#include <iostream>
using namespace std;

class Solution
{
    public:
        long long lucas(int n)
        {
            if(n==0) 
                return 2;
            else if(n==1) 
                return 1;
            
            unsigned long long int dp[n+1];
            
            dp[0] = 2; 
            dp[1] = 1;
            
            for(int i = 2 ; i<= n ; i++) 
            {
                dp[i] = (dp[i-1]+dp[i-2]) % 1000000007;
            }
            return (long long)dp[n];
        }
        
};

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		Solution ob;
		cout<<ob.lucas(n)<<endl;
	}
	return 0;
}
