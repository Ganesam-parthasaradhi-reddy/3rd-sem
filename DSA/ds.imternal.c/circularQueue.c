#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int Q[MAX] ;
int front=-1; 
int rear=-1;
void enqueue();
void dequeue();
void display();
void enqueue()
{
    if(front==(rear+1)% MAX)
      printf("queue is overflow\n");
    else if(front==-1)
    {
        front=rear=0;
    }
        else
            rear=(rear+1)%MAX;
            printf("enter data :");
            scanf("%d",&Q[rear]);
        }
    void dequeue()
    {
        if(front==-1)
        {
            printf("queue is underflow\n");
        }
        else if (front==rear)
        {
            front=rear=-1;
        }
        else
        {
            front=(front+1)%MAX;
        }
    }
void display()
{
  if(front==-1)
  printf("Queue is empty\n");
  else
  {
    int i=front;
    while(i!=rear)
    {
        printf("%d\t",Q[i]);
        i=(i+1)%MAX;
    }
    printf("%d\n",Q[i]);
  }
}
int main()
{
    int ch;
    while(1)
    {
        printf("\n1.enqueue \n2.dequeue \n3.display \nENTER  THE DATA :");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            {
                enqueue();
                break;
            }
            case 2:{
                dequeue();
                break;
            }
            case 3:{
                display();
                break;
            }
            default:
            printf("wrong choice");
        } 
      }
}