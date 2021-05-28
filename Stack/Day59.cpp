#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        int i=0;
        stack<char> s;
        while(x[i]!='\0')
        {
            if(!s.empty())
            {
                if(s.top()=='(' && x[i]==')')
                    s.pop();
                else if(s.top()=='{' && x[i]=='}')
                    s.pop();
                else if(s.top()=='[' && x[i]==']')
                    s.pop();
                else
                    s.push(x[i]);
            }
            else
                s.push(x[i]);
            i++;
        }
        return s.empty();
    }

};

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}  
