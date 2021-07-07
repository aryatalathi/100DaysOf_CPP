#include <bits/stdc++.h>
using namespace std;

class Solution{
		

	public:
	int minDeletions(int arr[], int n) 
	{ 
	    int x[n];
        int maxi = 0;
        
        for(int i=0; i<n; i++)
        {
            x[i]=1;
        }
        for(int i=1; i<n; i++)
        {
            for(int j=0; j<i; j++)
            {
                if(arr[i]>arr[j] && x[i]<x[j]+1)
                x[i] = x[j]+1;
            }
        }
         
        for(int i=0; i<n; i++)
        {
            if(x[i]>maxi)
                maxi = x[i];
        }

        return(n-maxi);

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

        int arr[n];
        for(int i = 0; i < n; i++)
        	cin >> arr[i];

	    Solution ob;
	    cout << ob.minDeletions(arr, n) << "\n";
	     
    }
    return 0;
} 
