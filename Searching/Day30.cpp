#include<bits/stdc++.h> 
using namespace std;
bool search(vector<vector<int> > matrix, int n, int m, int x) ;
int main() 
{ 
	int t;
    cin>>t;
    while(t--)
    {

 		int n, m;
    	cin>> n>> m;
        vector<vector<int> > matrix(n);
            
        for(int i=0; i<n; i++)
        {
            matrix[i].assign(m, 0);
            for( int j=0; j<m; j++)
            {
                cin>>matrix[i][j];
            }
        }
        
        int x;
        cin>>x;

        if (search(matrix,n,m,x)) 
            cout << "1\n"; 
        else
            cout << "0\n"; 
    }
	return 0; 
} 

bool search(vector<vector<int> > matrix, int n, int m, int x) 
{ 
    int low=0;
    int high=m-1;

    while(low<=n-1 && high>=0)
    {
        if(matrix[low][high]==x)
        return true;

        else if(matrix[low][high]>x)
        high--;
        
        
        else
        low++;
    }
	return false;

}
