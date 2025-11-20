#include<stdio.h>
#include<stdlib.h>
#define max 5
struct node *front=NULL,*rear=NULL;
int size=0;
struct node
{
    int data;
    struct node *next;
};
void enqueue()
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node)); 
    temp->next=NULL;
    printf("\nenter data :");
    scanf("%d",&temp->data);
    if(max==size)
    {
        printf("queue is full");
    }
    else if(front==NULL && rear==NULL)
    {
    front=rear=temp;
    printf("%d enqueued",temp->data);
    }
    else
    {
        rear->next=temp;
        rear=temp;
        printf("%d is enqueued",temp->data);
    }
}
void dequeue()
{
    if(front==NULL && rear==NULL)
    {
        printf("queue is empty");
    }
    else if(front==NULL)
        {
            front=rear=NULL;
        }
        else
        {
        printf("%d dequeued",front->data);
        front=front->next;
        free(front);
        }
    }
void peek()
{
    if(front==NULL && rear==NULL)
    {
        printf("underflow");
    }
    else
    {
        printf("%d",front->data);
    }
}
void display()
{
    if(front==NULL && rear==NULL)
    {
        printf("queue is empty");
    }
    else
    {
        struct node *ptr;
        ptr=front;
        while(ptr!=NULL) 
        {
            printf("%d ",ptr->data);
            ptr=ptr->next;
        }
    }
}
int main()
{
    int ch;
    while(1)
    {
        printf("\n1.enqueue,\n2.dequeue,\n3.peek,\n4.display \nENTER YOUR CHOISE :");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            {
                enqueue();
                break;
            }
            case 2:
            {
                dequeue();
                break;
            }
            case 3:
            {
                peek();
                break;
            }
            case 4:
            {
                display();
                break;
            }
            default:
            printf("wrong choice");
}
}
}