#include<bits/stdc++.h>
using namespace std;
queue<int> modifyQueue(queue<int> q, int k);
int main(){
    int t;
    cin>>t;
    while(t-->0){
        int n,k;
        cin>>n>>k;
        queue<int> q;
        while(n-->0){
            int a;
            cin>>a;
            q.push(a);
        }
        queue<int> ans=modifyQueue(q,k);
        while(!ans.empty()){
            int a=ans.front();
            ans.pop();
            cout<<a<<" ";
        }
        cout<<endl;
    }
}

queue<int> modifyQueue(queue<int> q, int k)
{
    if(k > q.size()) 
    {
        return q;
    }
    
    stack<int> s;
    queue<int> q1;
    for(int i = 0 ; i < k ; i++)
    {
        s.push(q.front());
        q.pop();
    }
    while(!q.empty())
    {
        q1.push(q.front());
        q.pop();
    }
    while(!s.empty())
    {
        q.push(s.top());
        s.pop();
    }
    while(!q1.empty())
    {
        q.push(q1.front());
        q1.pop();
    }
    return q;
    
}
