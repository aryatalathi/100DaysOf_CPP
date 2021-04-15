#include<bits/stdc++.h>
using namespace std;
#define NO_OF_CHARS 256

class Solution{
    public:
    int longestUniqueSubsttr(string S){
        int N = S.size();
        vector<int> lastOccur(256, -1);
        
        int res = 0;
        
        int i = 0;
        for(int j = 0; j < N; j++)
        {
            i = max(i, lastOccur[S[j]] + 1);
            
            res = max(res, j - i + 1);
            
            lastOccur[S[j]] = j;
        }
        
        return res;
        
    }
};

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str;
		cin>>str;
		Solution ob;
		cout<<ob.longestUniqueSubsttr(str)<<endl;
	}
	return 0;
}
