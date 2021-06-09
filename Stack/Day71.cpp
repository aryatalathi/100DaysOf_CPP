// C++ implementation to convert infix expression to postfix
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

/*Algo : Iterate over the given string.
If current character is an operand, add it to output string.
Else if current character is ‘(‘, push it to the stack.
Else if current character is ‘)’, pop the elements from stack and add to output string until ‘(‘ is encountered in stack.
Else current character is an operator so while precedence of current character is less than or equal to precedence of top of stack pop the top element and add it to the output string. Push the current character in the stack.
After iteration, pop all the remaining elements from the stack and add them to output string.
Return the output string.*/

class Solution
{
     
    public:
    int prec(char c) 
    {
        if(c == '^')
            return 3;
        else if(c == '*' || c == '/')
            return 2;
        else if(c == '+' || c == '-')
            return 1;
        else
            return -1;
    }
   
    string infixToPostfix(string s)
    {
        s='('+s+')';
    //cout<<s<<endl;
    string postfix="";
    stack<char> st;
    int len=s.length();
    for(int i=0;i<len;i++)
	{
        if(s[i]=='(')
		{
            st.push(s[i]);
        }
        else if((s[i]>=97 && s[i]<=122)||(s[i]>=65 && s[i]<=90))
		{
            postfix=postfix+s[i];
        }
        else if(s[i]==')')
		{
            while(!st.empty() && st.top()!='(')
			{
                 postfix=postfix+st.top();
                 st.pop();
            }
            st.pop();
        }
        else if(st.top()=='(')
		{
            st.push(s[i]);
        }
        else{
             while(!st.empty() && prec(s[i]) <= prec(st.top())) 
            { 
                char c = st.top(); 
                st.pop(); 
                postfix += c; 
            } 
            st.push(s[i]); 
        } 
        
    }
    return postfix;
    }
};


// { Driver Code Starts.
//Driver program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--)
    {
        string exp;
        cin>>exp;
        Solution ob;
        cout<<ob.infixToPostfix(exp)<<endl;
    }
    return 0;
}
  // } Driver Code Ends
