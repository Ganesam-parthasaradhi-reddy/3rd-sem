#include<stdio.h>
int push(int value,int arr,int top,int n)
int pop(int arr,int top)
void display(int arr,int top)
int push(value,arr,top,n)
{
    if(top==(n-1))
    {
        printf("over flowed");
    }
    else
    {
        arr[top+1]=value;
        top++;
    } 
    return top; 
}
int pop(arr,top)
{
    if(top==-1)
    {
        printf("underflow");
    }
    else
    {
        printf("Popped :%d ",arr[top]);
        top--;
    }
    return top;
}
void display(arr,top)
{
    int i=top;
    while(i!==-1)
    {
        printf("%d",arr[top]);
        top--;
    }
    printf("\n");
}
int main()
{
    int n=2,i;
    int arr[n];
    int top=-1;
    top=push(100,arr,top,n);
    top=pop(arr,top);
    top=push(200,arr,top,n);
    display(arr,top);
}