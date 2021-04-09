#include<bits/stdc++.h>

using namespace std;

int trappingWater(int arr[], int n){

    int left=0, right=n-1, left_max=0, right_max=0, res=0;
    while(left<=right)
    { 
        if(arr[left]<=arr[right])
        {
            if(left_max<arr[left])
            {   
                left_max=arr[left];
            }
            else
            {
                res += (left_max-arr[left]);
            }
            left++;
        }
        else
        {
            if(right_max<arr[right])
            {
                right_max=arr[right];
            }
            else
            {
                res += (right_max-arr[right]);
            }
            right--;
        }
    }
    return res;
    
}

int main(){
    
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        int a[n];
        
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        
        cout << trappingWater(a, n) << endl;
    }
    
    return 0;
}  
