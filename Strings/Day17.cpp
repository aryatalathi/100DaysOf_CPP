#include <bits/stdc++.h>
using namespace std;

class Solution{
public:	
		
	string removeDups(string S) 
	{
	    int str[26] = {0};
        string res;
        for(int i = 0; i < S.size(); i++)
        {
            if(str[S[i] - 'a'] == 0)
            {
                res += S[i];
            }
            
            str[S[i] - 'a']++;
        }
        
        return res;
	    
	}
};

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   		
   		Solution ob;
   		cout << ob.removeDups(s) << "\n";
   		
   	}

    return 0;
}
