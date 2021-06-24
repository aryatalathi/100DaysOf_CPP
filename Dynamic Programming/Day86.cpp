#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    long long countWays(int n)
    {
        long long mod = 1000000007;
         if(n==0)
        {
            return 0;
        }
        
        if(n==1)
        {
            return 1;
        }
        
        if(n==2)
        {
            return 2;
        }
        
        if(n==3)
        {
            return 4;
        }
        
        long long a = 1;
        long long b = 2;
        long long c = 4;
        long long d;
        
        for(int i=4; i<=n; i++)
        {
            d = (a + b + c) % mod;
            
            a = b;
            b = c;
            c = d;
        }
        
        return d;
        
    }
};

int main()
{
	int t;
	cin >> t;
	
	while(t--)
	{
		int n;
		cin>>n;
		Solution ob;
		cout << ob.countWays(n) << endl;
	}
    
    return 0;
    
}
