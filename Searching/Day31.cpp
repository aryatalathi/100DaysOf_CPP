#include <bits/stdc++.h> 
using namespace std;

class Solution{
    public:
    int ternarySearch(int arr[], int N, int K) 
    { 
    
       int l=0, r=N-1;
       while(r>=l)
       {
           int mid1 = l + (r-l)/3;
           int mid2 = r - (r-l)/3;
           
           if(arr[mid1]==K || arr[mid2]==K)
           {
               return 1;
           }
           if(K<arr[mid1])
           {
               r = mid1 - 1;
           }
           else if(K>arr[mid2])
           {
               l = mid2 + 1;
           }
           else
           {
               l = mid1 + 1;
               r = mid2 - 1;
           }
           
       }
       return -1;
    }
};

int main(void) 
{ 
    
    int t;
    cin >> t;
    while(t--){
        int N, K;
        cin >> N >> K;
        
        int arr[N];
        
        for(int i = 0;i<N;i++){
            cin >> arr[i];
        }
        Solution ob;
        cout << ob.ternarySearch(arr, N, K) << endl;

    }

	return 0; 
} 
