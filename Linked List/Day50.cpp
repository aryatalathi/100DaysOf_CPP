#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
void printList(Node* node) 
{ 
	while (node != NULL) { 
		cout << node->data <<" "; 
		node = node->next; 
	}  
	cout<<"\n";
} 

int getMiddle(Node *head);
int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;

		int data;
		cin>>data;
		struct Node *head = new Node(data);
		struct Node *tail = head;
		for (int i = 0; i < n-1; ++i)
		{
			cin>>data;
			tail->next = new Node(data);
			tail = tail->next;
		}
		cout<<getMiddle(head)<<endl;
	}
	return 0; 
} 

/* Link list Node 
struct Node {
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
}; */
int getMiddle(Node *head)
{
   Node *fast = head;
   Node *slow = head;
   if(head==NULL)
   {
       return -1;
   }
   else
   {
       while(fast!=NULL && fast->next!=NULL)
       {
           fast = fast->next->next;
           slow = slow->next;
       }
       return slow->data;
   }
}

