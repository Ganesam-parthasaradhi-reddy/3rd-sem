#include<stdio.h>
#include<stdlib.h>
#define max 5
int size =0;
struct node
{
  int data ;
  struct node *next;
}*top=NULL;
void push()
{
    if(max==size)
    {
        printf("overflow  stack is full");
    }
else
    {
  struct node *temp;
  temp=(struct node*)malloc(sizeof(struct node));
  printf("enter data:");
  scanf("%d",&temp->data);
  temp->next=top;
  top=temp;
  size++;
}
}
void pop()
{
    if(top==NULL)
    {
        printf("stack is empty underflow");
    }
    else
    {
        struct node *temp= top;
        printf("%d is poped",temp->data);
        top=temp->next;
        free(temp);
        size--;
    }
}
void peek()
{
    if(top==NULL )
    {
        printf("stack is empty underflow");
    }
    else
    {
        printf("\ntop is :%d",top->data);
    }
}
void display() {
    if (top == NULL) {
        printf("Stack is empty\n");
    } else {
        struct node *ptr;
        ptr=top;
        while(ptr!=NULL) 
        {
            printf("%d ",ptr->data);
            ptr=ptr->next;
        }
    }
}
void isfull()
{
    if(max==size-1)
    {
        printf("stack is full ");
    }
    else{
        printf("stack is not full");
    }
}
void isempty()
{
    if(top==NULL )
    {
        printf("\nstack is empty");
    }
    else
    {
        printf("\n stack is  not empty");
    }
}
int main()
{
    int ch;
    while(1)
    {
        printf("\n1.push \n2.pop \n3.peek \n4.display \n5.isfull \n6.isempty  \n enter your choise :");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1 :
            {
                push();
                break;
            }
            case 2 :{
                pop();
                break;
            }
            case 3 :{
                peek();
                break;
            }
            case 4 :{
                display();
                break;
            }
            case 5 :{
                isfull();
                break;
            }
            case 6 :{
                isempty();
                break;
            }
        } 
      }
}
