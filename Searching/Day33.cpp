#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
     int maximum(int arr[],int size)
{
    int max = 0;
    for(int i=0;i<size;i++) 
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }
    return max;
}


int majorityElement(int a[], int size)
{
    int max = maximum(a,size);
    int Count[max+1];
    for(int i=0;i<=max;i++)
    {
        Count[i] = 0;
    }
    for(int i=0;i<size;i++) 
    {
        Count[a[i]]++;
    }
    for(int i=0; i<=max; i++)
    {
        if(Count[i]>size/2)
        {
            return i;
        }
    }
    return -1;
        
}

};

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}
