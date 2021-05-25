#include<iostream>
using namespace std;

int stack[100], n=100, top=-1;

void pop()
{
	if(top<=-1)
		cout<<"UNDERFLOW!!!"<<endl;
	else
		cout<<"Element popped is : "<<stack[top]<<endl;	
}

void push(int val)
{
	if(top>=n-1)
		cout<<"OVERFLOW!!!"<<endl;
	else
		top++;
		stack[top] = val;
}

void display()
{
	if(top>=0)
	{
		cout<<"Stack elements are : "<<endl;
		for(int i=top; i>=0; i--)
		{
			cout<<stack[i]<<" ";
			cout<<"\n";
		}
	}
}

int main()
{
	int ch, val;
	cout<<"1. Push in stack"<<endl;
	cout<<"2. Pop from stack"<<endl;
	cout<<"3. Display stack"<<endl;
	cout<<"4. Exit"<<endl;
	do 
	{	
		cout<<"ENTER CHOICE : "<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1: 
					cout<<"Enter value to be pushed : "<<endl;
					cin>>val;
					push(val);
					break;
			case 2: 
					pop();
					break;
			case 3:
					display();
					break;
			case 4:
				    cout<<"EXIT"<<endl;
				    break;
			default:
				    cout<<"INVALID CHOICE"<<endl;
		}
	}
	while(ch!=4);
	return 0;	
}
