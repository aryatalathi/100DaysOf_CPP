/*count all the possible paths from top left to bottom right of a MxN matrix
 with the constraints that from each cell you can either move to right or down.*/

#include <iostream>
using namespace std;
 
long long  numberOfPaths(int m, int n)
{
    if(m == 1 || n == 1)
    return 1;
    return numberOfPaths(m,n-1) + numberOfPaths(n,m-1);
}
 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>m>>n;
	    cout << numberOfPaths(m, n)<<endl;
	}
    return 0;
}  
