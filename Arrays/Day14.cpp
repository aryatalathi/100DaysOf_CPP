#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void arrange(long long arr[], int n) 
    {
        long long arr1[n] ={0};
        for(int i=0; i<n; i++)
        {
            arr1[i] = arr[arr[i]];
        }
        for(int i=0; i<n; i++)
        {
            arr[i] = arr1[i] ;
        }
    }
};

int main(){
    
    int t;
    cin>>t;
    while(t--){
        
        int n;
        cin>>n;
        long long A[n];
        
        for(int i=0;i<n;i++)
		{
            cin>>A[i];
        }
        Solution ob;
        ob.arrange(A, n);
         
        for(int i=0;i<n;i++)
		{
            cout << A[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}  
