#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
    int lps(string S)
    {
        int n = S.size();
        int L[n][n];
    
        for (int i=0; i<n; i++)
            L[i][i] = 1;
    
        for (int k=2; k<=n; k++)
        {
            for (int i=0; i<n-k+1; i++)
            {
                int j = i+k-1;
                if (S[i] == S[j] && k == 2)
                    L[i][j] = 2;
                else if (S[i] == S[j])
                    L[i][j] = L[i+1][j-1] + 2;
                else
                    L[i][j] = max(L[i][j-1], L[i+1][j]);
            }
        }
        return L[0][n - 1];
    }
    int minimumNumberOfDeletions(string S) { 
        int n = S.size();
        int len = lps(S);

        return (n - len);
    } 
};

int main(){
    int t;
    cin >> t;
    while(t--){
        string S;
        cin >> S;
        Solution obj;
        cout << obj.minimumNumberOfDeletions(S) << endl;
    }
return 0;
}
