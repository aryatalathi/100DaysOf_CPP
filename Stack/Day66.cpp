#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        int n = sizeOfStack/2;
        int curr = 0;
        stack<int> s1;
        while(!s.empty())
        {
            if(curr!=n)
            s1.push(s.top());
            curr++;
            s.pop();
        }
        while(!s1.empty())
        {
            s.push(s1.top());
            s1.pop();
        }
    }
};

int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        int sizeOfStack;
        cin>>sizeOfStack;
        
        stack<int> myStack;
        
        for(int i=0;i<sizeOfStack;i++)
        {
            int x;
            cin>>x;
            myStack.push(x);    
        }

            Solution ob;
            ob.deleteMid(myStack,myStack.size());
            while(!myStack.empty())
            {
                cout<<myStack.top()<<" ";
                myStack.pop();
            }
        cout<<endl;
    }   
    return 0;
}
