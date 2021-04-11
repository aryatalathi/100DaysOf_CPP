
#include<iostream>
using namespace std;
int maxArea(int A[], int len);

long long maxArea(long long A[], int len)
{
    long long int res = 0;
    int l = 0;
    int h = len-1;
    while(l<h){
        res = max(res,(h-l)*min(A[l],A[h]));
        if(A[l]<A[h])
            l++;
        else
            h--;
    }
    return res;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
    {
        int n;
        cin>>n;
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cout<<maxArea(arr,n)<<endl;
    }
return 0;
}

