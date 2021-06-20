#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

class Solution
{
    public:
    int FindMaxSum(int arr[], int n)
    {
        int x = arr[0];
        int y = 0;
        int m;
    
        for (int i=1; i<n; i++)
        {
            m = (x > y) ? x : y;
    
            x = y + arr[i];
            y = m;
        }
    
        return ((x > y) ? x : y);
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
		int a[n];
		
		for(int i=0;i<n;++i)
			cin>>a[i];
		Solution ob;
		
		cout<<ob.FindMaxSum(a,n)<<endl;
	}
	return 0;
}
