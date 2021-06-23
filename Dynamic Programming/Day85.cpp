#include<bits/stdc++.h>
using namespace std;

class Solution{
	public:
		int nthPoint(int n)
		{
		    long long a = 1;
            long long b = 2;
            long long c;
            long long mod = 1000000007;
            
		    if(n==1)
            {
                return 1;
            }
            
            if(n==2)
            {
                return 2;
            }
            
            for(int i=3; i<=n; i++)
            {
                c = (a+b) % mod;
                
                a = b % mod;
                b = c % mod;
            }
            
            return c; 
		    
		}
};

int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		int ans  = ob.nthPoint(n);
		cout << ans <<"\n";
	}
	return 0;
}
