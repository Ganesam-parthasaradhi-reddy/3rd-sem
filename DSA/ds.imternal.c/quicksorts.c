#include<stdio.h>
int quicksort(int a[] ,int i ,int j);
int partition(int a[] ,int i ,int j);
int quicksort(int a[] ,int i ,int j)
{
    if(i<j)
    {
        int pos=partition(a,i,j);
        quicksort(a,i,pos-1);
        quicksort(a,pos+1,j);
    }
}
int partition(int a[] , int i, int j)
{
    int pivot=a[i];
    int start=i;
    int end=j;
    while(start<end)
    {
        while(a[start]<=pivot)
        {
            start++;
        }
        while (a[end]>pivot)
        {
            end--;
        }
        if(start<end)
        {
            int temp=a[start];
            a[start]=a[end];
            a[end]=temp;
        }
       }
        a[i]=a[end];
        a[end]=pivot;
        return end;
    }
int main()
{
    int i ,n ;
    printf("enter n value :");
    scanf("%d",&n);
    int a[n];
    printf("enter the element in array :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    quicksort(a,0,n-1);
    printf("after shorting ");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}