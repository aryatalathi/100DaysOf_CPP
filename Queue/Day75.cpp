#include<bits/stdc++.h>
using namespace std;

class Queue {
    stack<int> input, output;
public:

    void enqueue(int x) 
    {
         input.push(x);
    }

    int dequeue() 
    {
        while(input.size() > 1)
        {
            output.push(input.top());
            
            input.pop();
        }
        
        
        int x;
        if(input.size() == 1)
        {
            x = input.top();
            input.pop();
        }
        else
        {
            x = -1;
        }
        
        while(!output.empty())
        {
            input.push(output.top());
            
            output.pop();
        }
        return x;
    }
};

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        Queue ob;

        int Q;
        cin>>Q;
        while(Q--){
        int QueryType=0;
        cin>>QueryType;
        if(QueryType==1)
        {
            int a;
            cin>>a;
            ob.enqueue(a);
        }
        else if(QueryType==2)
        {
            cout<<ob.dequeue()<<" ";

        }
        }
    cout<<endl;
    }
}
