#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void insert(queue<int> &q, int k){
        q.push(k);
    }
    
    int findFrequency(queue<int> &q, int k)
    {
        int c=0;
        queue<int> q1=q;
        while(!q1.empty())
        {
            int y=q1.front();
            q1.pop();
            if(y==k)
            c=c+1;
        }
        return c;
    }
};

int main() {
    
		int testcase;
		cin>>testcase;
		
		while(testcase-- > 0){
		    
		    queue<int> q;
		    int n, k;
		    cin>>n;
		    
		    Solution obj;
		    
		    for(int i = 0;i<n;i++){
		        cin >> k;
		        obj.insert(q, k);
		    }
		   
		    int m;
		    cin >> m;
		    for(int i = 0;i<m;i++){
		        cin >> k;
		        int f = obj.findFrequency(q, k);
		        if(f != 0){
		            cout<<f<<endl;
		        }
		        else{
		            cout<<"-1\n";
		        }
		    }
		}
	return 0;
}
