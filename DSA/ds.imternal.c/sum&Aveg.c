#include<stdio.h>
struct student {
    int marks;
};
int main()
{
    int n;
    printf("enter the n value :");
    scanf("%d",&n);
    struct student m[n];
    int i , sum= 0;
    float avg;
    printf("enter the marks of n student \n");
    for(i=0;i<n;i++)
    {
        printf("stuent %d:",i+1);
    scanf("%d",&m[i].marks);
    sum=sum+ m[i].marks;
    }
avg= sum/n;
printf("the student marks: \ntotal:%d average:%2.f",sum , avg);
}

