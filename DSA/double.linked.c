#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
    struct node *prev;
};
int main()
{
    int n,i,value;
    scanf("%d",&n);
    struct node*head=(struct node*)(malloc(sizeof(struct node)));
    struct node *temp=head;
    for(i=0;i<n;i++)
    {
        scanf("%d",&value);
        struct node*newnode=(struct node*)(malloc(sizeof(struct node)));
        newnode->data=value;
        newnode->next=NULL;
        newnode->prev=temp;
        temp=temp->next;
    }
    head=head->next;
    head->prev=NULL;
    temp=head;
    while(temp)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    return 0;

}