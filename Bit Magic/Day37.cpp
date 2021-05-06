#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    int max_xor(int arr[] , int n)
    {
        int maxi = 0;
 
        for (int i=0; i<n; i++) 
        {
            for (int j=i+1; j<n; j++) 
            {
                maxi = max(maxi,arr[i] ^ arr[j]);
            }
        }
        return maxi;
    }
    
};

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int n;
		cin >> n;

		int a[n];
		for (int i = 0; i < n; i++)
			cin >> a[i];

        Solution ob;
		cout << ob.max_xor(a, n) << endl;

	}
}
