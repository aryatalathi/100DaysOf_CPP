#include<iostream>
#include<cmath>
using namespace std;
int main()
 {
	//code
        int t;
cin>>t;
while(t--)
{
   int n;
   cin>>n;
   int k=log(n)/log(2);
   cout<<pow(2,k)<<endl;
}
	return 0;
}
