#include <bits/stdc++.h>
using namespace std;

int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
    int count = -1;
    int j = m-1;
	for(int i=0; i<n; i++)
	{
        while(j>=0)
        {
            if(arr[i][j]==1)
            {
	           j--;
			   count = i;
	        }
	        else
            {
	            break;
	        }
        }
    }
    return count;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector< vector<int> > arr(n,vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin>>arr[i][j];
            }
        }
    	int ans = rowWithMax1s(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}
