#include <iostream>
using namespace std;

class Solution
{
    public:
        int maxAmt(int n , int hi[] , int li[])
        {
            int first = 0, second = hi[0];
            
            for(int i = 1; i < n; i++)
            {
                first = max(first + hi[i], second + li[i]);
                swap(first, second);
            }
            
            return max(first, second);    
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
            int hi[n] , li[n];
            for(int i = 0 ;i<n;i++)
                cin>>hi[i];
            for(int i = 0 ;i<n;i++)
                cin>>li[i];
            Solution ob;
            cout<<ob.maxAmt(n,hi,li)<<endl;    
        }
}
