// C++ program to rearrange an array in minimum 
// maximum form 
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// This function wants you to modify the given input
// array and no need to return anything
// arr: input array
// n: size of array
void rearrange(long long *arr, int n) 
{ 
	
	// Your code here
	int temp[n];
	int l=0, r=n-1;
	int flag=true;
	for (int i=0; i<n; i++) 
    { 
        if (flag) 
            temp[i] = arr[r--]; 
        else
            temp[i] = arr[l++]; 
  
        flag = !flag; 
    } 
	for(int i=0;i<n;i++)
	{
        arr[i]=temp[i];	    
	}
	 
}

// { Driver Code Starts.

// Driver program to test above function 
int main() 
{
    int t;
    
    //testcases
    cin >> t;
    
    while(t--){
        
        //size of array
        int n;
        cin >> n;
        
        long long arr[n];
        
        //adding elements to the array
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        
        //calling rearrange() function
        rearrange(arr, n);
        
        //printing the elements
        for (int i = 0; i < n; i++) 
		    cout << arr[i] << " ";
		
		cout << endl;
    }
	return 0; 
} 
  // } Driver Code Ends
