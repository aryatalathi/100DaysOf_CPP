#include<bits/stdc++.h>
using namespace std;

void convertToWave(int *arr, int n){
    int i, temp;
    for(i=0; i<n-1;i++)
    {
        temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
        i++;
    }
    
}
int main()
{
    int t,n;
    cin>>t; 
    while(t--) 
	   {
        cin>>n; 
        int a[n]; 
        for(int i=0;i<n;i++)
            cin>>a[i];
        
        convertToWave(a, n);

        for(int i=0;i<n;i++)
            cout<<a[i]<<" "; 
            
        cout<<endl;
    }
} 
