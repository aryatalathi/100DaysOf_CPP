#include<iostream>
using namespace std;
int main() {
	int t,n,size,x;
	
	cin>>t;
	
	while(t-->0)
	{
	    cin>>size;
	    x=0;
	    while(size-->0)
	    {
	        cin>>n;
	        x^=n;
	    }
	    cout<<x<<endl;
	}
	
	return 0;
}
