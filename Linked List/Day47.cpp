#include <iostream>
using namespace std;


struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};


Node *inPlace(Node *root);
 
void print(Node *root)
{
    Node *temp = root;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}


int main() {
	// your code goes here
	int T;
	cin>>T;
 
	while(T--)
	{
		int K;
		cin>>K;
		struct Node *head = NULL;
        struct Node *temp = head;
 
		for(int i=0;i<K;i++){
		int data;
		cin>>data;
			if(head==NULL)
			head=temp=new Node(data);
			else
			{
				temp->next = new Node(data);
				temp=temp->next;
			}
		}
		Node *res = inPlace(head);
		print(res);
		cout<<endl;
	}
	return 0;
}
// } Driver Code Ends


/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/


Node *inPlace(Node *root)
{
 // your code goes here
    if(root == NULL || root->next == NULL)
        return root;
    
    //To get the last previous node
    Node * temp = root;
    while(temp->next->next != NULL)
        temp = temp->next;
    
    //Holding the last node
    Node *left = temp->next;
    temp->next = NULL;
    
    //Recursive calls to get the next nodes
    Node *toattach = inPlace(root->next);
    root->next = left;
    left->next = toattach;
    return root;
}

