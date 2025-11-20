#include<stdio.h>
#define max 5
int stack[max];
int top=-1;
void push()
{
    if(top==max-1)
    {
        printf("overflow stack is full ");
    }
    else
    {
       int value;
       printf("enter value :");
       scanf("%d",&value);
       top++;
       stack[top]=value;
       printf("%d is pushed",stack[top]);
    }
}
void pop()
{
  if(top==-1)
  {
    printf("underflow stack is empty ");
  }
  else
  {
    printf("%d poped",stack[top]);
    top--;
  }
}
void peek(){
    if(top==-1)
  {
    printf("underflow stack is empty ");
  }
  else
  {
    printf("top is :%d",stack[top]);
  }
}
void display()
{
    int i;
    if(top==-1)
  {
    printf("underflow stack is empty ");
  }
  else
  {
    printf("\nstack element are:");
    for(i=top;i>=0;--i)
    {
        printf("%d",stack[i]);
    }
  }
}
void isfull()
{
    if(top==max-1)
    {
        printf("stack isfull");
    }
    else
    {
        printf("stack is not full ");
    }
}
void isempty()
{
    if(top==-1)
    {
        printf("stack is empty");
    }
    else
    {
        printf("stack is not empty");
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
            case1:
            {
                push();
                break;
            }
            case2:{
                pop();
                break;
            }
            case3:{
                peek();
                break;
            }
            case4:{
                display();
                break;
            }
            case5:{
                isfull();
                break;
            }
            case6:{
                isempty();
                break;
            }
        } 
      }
}