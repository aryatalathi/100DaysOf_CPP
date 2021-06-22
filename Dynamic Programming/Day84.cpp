#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int maxSum(int N, vector<vector<int> > mat)
    {
        int a = max(mat[0][0], mat[1][0]);
 
        int b = 0, m;
     
        for (int i=1; i<N; i++)
        {
            m = max(b,a);
     
            a = b + max(mat[0][i], mat[1][i]);
     
            b = m;
        }
        
        return max(b,a);
    }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<vector<int> > mat(2, vector<int>(N, 0));
        for(int i = 0;i < 2; i++){
            for(int j = 0; j < N; j++)
                cin>>mat[i][j];
        }
        
        Solution ob;
        cout<<ob.maxSum(N, mat)<<"\n";
    }
    return 0;
}
