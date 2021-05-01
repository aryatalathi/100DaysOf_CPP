#include<iostream>
using namespace std;

int main(){
	long long t;
	cin>>t;

	while(t--){
		long long n;
		cin>>n;
		long long a[n],b[n],p=0;

		for (long long i = 0; i < n; i++)
		{
			cin>>a[i];
		}

		long long maximum = INT_MIN;
		for (long long i = n-1; i >=0 ; i--){
			if (a[i]>=maximum){
			    maximum=a[i];
			    b[p]=a[i];
			    p++;
			}
		}
		
		for(long long i=p-1;i>=0;i--){
		    cout<<b[i]<<" ";
		}

		cout<<"\n";
	}
	return 0;
}
