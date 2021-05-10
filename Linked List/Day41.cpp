#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

int count(struct node* head, int search_for);
/* Link list node */
struct node
{
    int data;
    struct node* next;
    
    node(int x){
        data = x;
        next = NULL;
    }
}*head;

void insert()
{
    int n,i,value;
    struct node *temp;
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&value);
        if(i==0)
        {
            head=new node(value);
            head->next=NULL;
            temp=head;
            continue;
        }
        else
        {
            temp->next= new node(value);
            temp=temp->next;
            temp->next=NULL;
        }
    }
}

void printList(struct node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

int main(void)
{
    int t,k,n,value;
     scanf("%d",&t);
     while(t--)
     {
     insert();
     scanf("%d",&k);
     value=count(head, k);
     printf("%d\n",value);
     }
     return(0);
}

int count(struct node* head, int search_for)
{
    int count = 0;
    node* temp = head;
    while(temp)
    {
        if(temp->data == search_for)
        {
            count+=1;
        }
        temp = temp->next;
    }
    return count;
}
