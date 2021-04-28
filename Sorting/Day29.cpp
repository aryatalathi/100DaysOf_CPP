#include<bits/stdc++.h>
using namespace std;

int main()
{	
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int entry[n],ex[n];
	    for(int i=0;i<n;i++)    
	        cin>>entry[i];
	    for(int i=0;i<n;i++)    
	        cin>>ex[i];
	    
	    int arr[100001];
	    for(int i=0;i<100001;i++) 
	        arr[i]=0;
	    for(int i=0;i<n;i++)    
	        ++arr[entry[i]];
	    for(int i=0;i<n;i++)        
	        --arr[ex[i]+1];
	    for(int i=1;i<100001;i++)   
	        arr[i]+=arr[i-1];
	    
	    int index;
	    int mx=0;
	    for(int i=1;i<100001;i++){
	        if(arr[i]>mx){
	            mx=arr[i];
	            index=i;
	        }
	    }
	    cout << mx << " " << index << endl;
	}
	return 0;
}
