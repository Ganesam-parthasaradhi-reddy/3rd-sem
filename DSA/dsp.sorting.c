/////////////////////bubble sort////////

// #include<stdio.h>
// int main()
// {
// 	int n,i,j,cycle;
// 	scanf("%d",&n);
// 	int arr[n];
// 	for(i=0;i<n;i++)
// 	{
// 		scanf("%d",&arr[i]);
// 	}
// 	int m=n/2;
// 	for(j=0;j<n;j++){
// 	for(i=1;i<(n-1);i++)
// 	{
// 		if(arr[i]>arr[i+1])
// 		{
// 			int temp=arr[i];
// 			arr[i]=arr[i+1];
// 			arr[i+1]=temp;
// 		}
// 	}
// 	for(j=0;j<n;j++)
// 	{
// 		printf("%d ",arr[j]);
// 	}
// 	printf("\n");
// }
//   return 0;
// }
////////////////selection sort//////////
/*
#include<stdio.h>
int main()
{
	int n,i,j,m,min;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		min=i;
		for(j=i+1;j<n-i;j++)
		{
			if(arr[j]<arr[min])
			{
				min=j;
			}
			
		}
		int temp=arr[min];
		arr[min]=arr[i];
		arr[i]=temp;
	}
	for(j=0;j<n;j++)
	{
		printf("%d ",arr[j]);
		printf("\n");
	}	
	
	return 0;
}
*/
///////////////////insertion sort//////////////////;
/*
#include<stdio.h>
int main()
{
	int n,i,j,key;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=1;i<n;i++)
	{
		key=arr[i];
		j=i-1;
		while(key<arr[j] && j>=0)
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=key;
		for(j=0;j<n;j++)
	{
		printf("%d ",arr[j]);
	}
	printf("\n");
	}
	
	return 0;
}
*/
/////////////merge sort/////////////
/*
#include<stdio.h>
void Solve(int arr[],int start,int mid,int end)
{
    int Size1 = mid - start + 1;
    int Size2 = end - mid;
    int firstArray[Size1];
    int SecondArray[Size2];
    int i,j,k=0;
    for(i=start;i<=mid;i++)
    {
        firstArray[k] = arr[i];
        k++;
    }
    k=0;
    for(j=mid+1; j<=end ;j++)
    {
        SecondArray[k] = arr[j];
        k++;
    }
    int Answer[Size1 + Size2];
    k=0,i=0,j=0;
    
    while( i< Size1 && j < Size2)
    {
        if(firstArray[i] < SecondArray[j]){
            Answer[k] = firstArray[i];
            i++;
            k++;
        }
        else{
            Answer[k] = SecondArray[j];
            j++;
            k++;
        }
    }
    if( i < Size1)
    {
        while(i<Size1){
            Answer[k] = firstArray[i];
            i++;
            k++;
        }
    }
    if(j < Size2)
    {
        while(j < Size2)
        {
            Answer[k] = SecondArray[j];
            j++;
            k++;
        }
    }
    
    k = start;
    for(i=0;i< Size1 + Size2 ;i++)
    {
        arr[k] = Answer[i];
        k++;
    }
    
}

void Divide(int arr[], int start ,int end)
{
    if(start < end)
    {
        int mid = (start+end)/2;
        Divide(arr , start , mid);
        Divide(arr, mid+1 , end);
        Solve(arr,start,mid,end);
    }
    
}

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int i;
    for(i=0;i<n;i++) scanf("%d",&arr[i]);
    Divide(arr,0,n-1);
    for(i=0;i<n;i++) printf("%d ",arr[i]);
    return 0;
}
*/
//////////////////////quick sort/////////////////////
/*
#include<stdio.h>
int QuickSort(int arr[],int start, int end)
{
    int pivot_index = start;
    
    int temp = arr[end];
    arr[end] = arr[pivot_index];
    arr[pivot_index] = temp;
    
    pivot_index = end;
    int pivot = arr[pivot_index];
    int k=start - 1;
    int i;
    for(i=start; i<=end; i++){
        if(arr[i] < pivot){
            k++;
            int temp = arr[i];
            arr[i] = arr[k];
            arr[k] = temp;
        }
    }
    temp = arr[pivot_index];
    arr[pivot_index] = arr[k+1];
    arr[k+1]=temp;
    
    return k+1;
}
    
    void Partition(int arr[],int start,int end){
        if(start < end)
        {
            int p = QuickSort(arr,start,end);
            Partition(arr,start,p-1);
            Partition(arr,p+1,end);
        }
    }

int main()
{
    int n;
    printf("Enter Size : ");
    scanf("%d",&n);
    int arr[n];
    int i=0;
    for(i=0;i<n;i++){
        printf("Enter Element - %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    Partition(arr,0,n-1);
    for(i=0;i<n;i++) printf("%d ",arr[i]);
}
*/
///////////////////radix sort//////////////////
/*			
#include<stdio.h>

void RadixSort(int arr[],int n,int exp){
    
    int Count[10] = {0};
    int i;
    for(i=0;i<n;i++)
    {
        int ans = (arr[i]/exp)%10;
        Count[ans]++;
    }
    for(i=1;i<10;i++){
        Count[i] += Count[i-1];
    }
    int output[n];
    for(i=n-1;i>=0;i--){
        int index = (arr[i]/exp) % 10;
        output[ Count[index] - 1] = arr[i];
        Count[index]--;
    }
    
    for(i=0;i<n;i++){
        arr[i] = output[i];
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max = -999999;
    for(i=0;i<n;i++)
    {
        if(arr[i] > max){
            max = arr[i];
        }
    }
    
    int exp;
    
    for(exp = 1; max/exp > 0; exp=exp*10){
        
        RadixSort(arr,n,exp);
        
    }
    
    for(i=0;i<n;i++) printf("%d ",arr[i]);
}
*/


























