#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    vector<int> leftSmaller(int n, int a[]){
        stack<int> s;
        vector<int> v;
        for(int i=0; i<n; i++)
        {
            if(s.empty())
            {
                s.push(a[i]);
                v.push_back(-1);
            }
            else if(s.top()<a[i])
            {
                v.push_back(s.top());
                s.push(a[i]);
            }
            else if(s.top()>=a[i])
            {
                while(!s.empty() && s.top()>=a[i]) //imp
                {
                    s.pop();
                }
                if(s.empty()==true)
                {
                    v.push_back(-1);
                }
                else
                {
                    v.push_back(s.top());
                }
                s.push(a[i]);
            }
            
        }
        return v;
    }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i = 0;i < n;i++)
            cin>>a[i];
        
        Solution ob;
        vector<int> ans = ob.leftSmaller(n, a);
        for(int i = 0;i < n;i++)
            cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
} 
