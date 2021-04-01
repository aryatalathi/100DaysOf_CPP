/*Given an integer N which has odd number of digits, 
find whether the given number is a balanced or not.
An odd digit number is called a balanced number if 
the sum of all digits to the left of the middle digit
and the sum of all digits to the right of the middle digit is equal.*/

#include <bits/stdc++.h>
using namespace std;

class Solution{
public:	
	bool balancedNumber(string N)
	{
	    int sum1 = 0, sum2 = 0, n = N.length();
        
        for(int i = 0; i < n/2; i++)
            {
                sum1 += N[i] - '0';
            }
        for(int i = n/2+1; i < n; i++)
            {
                sum2 += N[i] - '0';
            }
        if(sum1 == sum2)
        {
            return true;
        }
        return false;
	}
};

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string N;
        cin>>N;
        Solution ob;
        cout<<ob.balancedNumber(N)<<endl;
    }
    return 0;
}
  // } Driver Code Ends
