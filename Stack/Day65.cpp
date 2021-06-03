#include<iostream>
#include<stack>
using namespace std;
void push(stack<int>& s,int a);
bool isFull(stack<int>& s,int n);
bool isEmpty(stack<int>& s);
int pop(stack<int>& s);
int getMin(stack<int>& s);

stack<int> s;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,a;
		cin>>n;
		while(!isEmpty(s)){
		    pop(s);
		}
		while(!isFull(s,n)){
			cin>>a;
			push(s,a);
		}
		cout<<getMin(s)<<endl;
	}
}

void push(stack<int>& s, int a){    
    s.push(a);
}

bool isFull(stack<int>& s,int n){
	if(s.size()==n)
	{
	    return true;
	}
	else
	{
	    return false;
	}
}

bool isEmpty(stack<int>& s){
	if(s.size()==0)
	{
	    return true;
	}
	else
	{
	    return false;
	}
}

int pop(stack<int>& s){
    int data = s.top();
    s.pop();
    return data;
}

int getMin(stack<int>&s)
{
	int min = s.top();
    s.pop();

    while(!s.empty())
    {
        if(s.top() < min)
            min = s.top();
            s.pop();
    }
    return min;
}
