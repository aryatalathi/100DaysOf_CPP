#include <iostream>
using namespace std;  

class Solution{
    public:
    int max_Books(int a[], int n, int k)
    {
        int max = 0;
        for(int i=0; i<n; i++)
        {
            int sum = 0;
            while(i<n && a[i]<=k)
            {
                sum += a[i];
                i++;
            }
            if(max<sum)
                max = sum;
        }
        return max;
    }
};

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
  	int n,k;
  	cin>>n>>k;
  	int ar[n];
  	for(int i=0;i<n;i++)
  	{
  		cin>>ar[i];
  	}
  	Solution ob;
  	cout<<ob.max_Books(ar,n,k)<<endl;
        
  }    
  return 0;
}
