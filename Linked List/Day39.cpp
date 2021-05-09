#include<bits/stdc++.h>
using namespace std;  

struct Node
{
    char c;
    struct Node *next;
    
    Node(char x){
        c = x;
        next = NULL;
    }
    
};  


int compare(Node *list1, Node *list2); 


int main()
{
 int t,n;
 cin>>t;
 char x;
 while(t--)
 {
 cin>>n;
 cin>>x;
  Node *list1 = new Node(x);
    Node *temp=list1;
    for(int i=0;i<n-1;i++){
			cin>>x;
		temp->next = new Node(x);
		temp=temp->next;
		}
		int m;
		cin>>m;
    cin>>x;
    Node *list2 = new Node(x);
    temp=list2;
    for(int i=0;i<m-1;i++){
			cin>>x;
		temp->next = new Node(x);
		temp=temp->next;
		}
 
    cout << compare(list1, list2)<<endl;
    }
    return 0;
}

int compare(Node *list1, Node *list2) 
{
     while(list1!=NULL && list2!=NULL)
     {
         if(list1->c > list2->c)
         {
             return 1;
         }
         if(list1->c < list2->c)
         {
             return -1;
         }
         list1 = list1->next;
         list2 = list2->next;
     }
     if(list1!=NULL)
     {
         return 1;
     }
     if(list2!=NULL)
     {
         return -1;
     }
     return 0;
}