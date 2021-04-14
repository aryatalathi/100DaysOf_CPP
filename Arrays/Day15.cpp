#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    int findNumberOfTriangles(int arr[], int n)
    {
        sort(arr, arr+n);
        int count=0;
        for(int s=n-1;s>=2;s--)
        {
            int a=0;
            int b=s-1;
            while(a<b)
            {
                if(arr[a]+arr[b] > arr[s])
                {
                    int x = b-a;
                    count+=x;
                    b--;
                }
                else
                {
                    a++;
                }
            }
        }
        return count;
    }
};

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.findNumberOfTriangles(arr,n) <<endl;
    }
    return 0;
}
