#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    string removeKdigits(string S, int K) {
        stack<char> stk;
        for(int i = 0 ; i < S.length() ; i++)
        {
            if(!stk.empty() && stk.top() > S[i])
            {
                while(!stk.empty() && stk.top() > S[i] && K)
                {
                    stk.pop();
                    K--;
                }
            }
           
	        if(stk.empty() && S[i] == '0')
	            continue;
	                
	        stk.push(S[i]);
	        }
	        while(!stk.empty() && K)
	        {
	            stk.pop();
	            K--;
	        }
	        
	        
	        string ans = "";
	        while(!stk.empty())
	        {
	            ans = stk.top() + ans;
	            stk.pop();
	        }
	        
	        int index = 0;
	        while(ans.length() > 0 && ans[index] == '0')
	        {
	            index++;
	        }
	        ans = ans.substr(index, ans.length() - index);
	        if(ans.length() == 0)
	            ans = '0';
	        return ans;
}
};
int main() {
    int t;
    cin>>t;
    while(t--){
        string S;
        cin >> S;
        int K;
        cin >> K;
        Solution obj;
        cout<<obj.removeKdigits(S,K)<<endl;
    }
    return 0;
}
