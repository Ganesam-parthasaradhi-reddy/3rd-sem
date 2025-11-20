#include<stdio.h>
#define max 5
int queue[max];
int front=-1;
int rear=-1;
void enqueue()
{
    int val;
    printf("enter value ");
    scanf("%d",&val);
    if(rear==max-1)
    {
        printf("\nqueue is full overfow");
    }
    else if(front==-1  && rear==-1)
    {
        front=rear=0;
        queue[rear]=val;
        printf("%d enqueueed ",queue[rear]);
    }
    else
    {
        rear++;
        queue[rear]=val;
        printf("%d enqueued ",queue[rear]);
    }
}
void dequeue()
{
    if(front==-1  &&  rear==-1)
    {
        printf("\n queue is empty");
    }
    else if(front==rear)
    {
        front=rear=-1;
    }
    else{
        printf("%d is dequeued",queue[front]);
        front++;
    }
}
void peek(){
	if(front==-1 && rear==-1){
		printf("\nqueue is underflow");
	}
	else{
		printf("%d is  at front",queue[front]);
	}	
}
void  display()
{
    int i;
    if(front==-1 && rear==-1)
    {
        printf("\n queue is empty");
    }
    else{
        printf("\nqueue element  are :");
        for(i=front;i<=rear;i++)
        {
            printf("%d\t",queue[i]);
        }
    }
}
int main()
{
    int ch;
    while(1)
    {
        printf("\n1.enqueue \n2.dequeue \n3.peek \n4.display \nenter your choise :");
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
                peek();
                break;
            }
            case 4:{
                display();
                break;
            }
            default:
            printf("wrong choice");
        } 
      }
}