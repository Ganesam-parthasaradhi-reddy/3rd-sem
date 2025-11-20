#include<stdio.h>
int mergesort(int a[], int low , int high);
int merge(int a[], int low , int mid , int high);
int mergesort(int a[],int low , int high)
{
    int mid ;
    if(low<high){
    mid=(low+high)/2;
    mergesort(a, low , mid );
    mergesort(a , mid+1 , high);
    merge(a,low,mid,high);
    }
}
int merge (int a[], int low ,int mid, int high){
    int i,j,k,b[50];
    i=low;
    k=low;
    j=mid+1;
    while(i<=mid && j<=high)
    {
        if(a[i]<a[j])
        {
            b[k]=a[i];
            k++;
            i++;
        }
        else{
            b[k]=a[j];
            k++;
            j++;
        }
    }
        while(i<=mid)
        {
            b[k]=a[i];
            k++;
            i++;
        }
        while(j<=high)
        {
            b[k]=a[j];
            k++;
            j++;
        }
        for(i=low;i<k;i++)
        {
            a[i]=b[i];
        }
    }
int main(){
    int i,n;
    printf("enter n value :");
    scanf("%d",&n);
    int a[n];
    printf("/nenter elemnet array : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("after merge ");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
return 0;
}