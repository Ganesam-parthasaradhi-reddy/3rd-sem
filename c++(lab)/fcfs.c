#include<stdio.h>
int main()
{
    int n;
    int at[10],bt[10],ct[10],tat[10],wt[10],pid[10];
    float totaltat=0,totalwt=0;

    printf("Enter number of Processes :");
    scanf("%d",&n);

    printf("\nEnter the arrival time and bust time of the process :\n");
    for(int i = 0; i < n; i++)
    {
        pid[i]=i+1;
        printf("process id[%d]\n",i+1);
        printf("Arrival Time:");
        scanf("%d",&at[i]);
        printf("Burst Time:");
        scanf("%d",&bt[i]);

    }
    for(int i = 0 ; i < n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
           if(at[j] > at[j+1]){
            int temp=at[j];
            at[j]=at[j+1];
            at[j+1]=temp;
            temp = bt[j];
            bt[j] = bt[j+1];
            bt[j+1]=temp;
           }
        }
    }
        ct[0] = at[0]+bt[0];
        tat[0] = ct[0]-at[0];
        wt[0] = tat[0] -bt[0];


        for(int i = 1;i < n;i++)
        {
            if(at[i] > ct[i-1])
            ct[i] = at[i]+bt[i]; // cpu idle
        
        else{
            ct[i] = ct[i-1]+bt[i]; // Normal
        }
        tat[i] = ct[i]-at[i];
        wt[i] = tat[i]-bt[i];
        }

        for(int i = 0; i < n; i++){
            totaltat +=tat[i];
            totalwt+=wt[i];
        }
        printf("\npid\tat\tbt\tct\ttat\twt\n");
        for(int i=0;i<n;i++){
            printf("P%d\t%d\t%d\t%d\t%d\t%d\t\n",pid[i],at[i],bt[i],ct[i],tat[i],wt[i]);
        }

        printf("\nAverage TurnAroundTime = %.2f",totaltat/(float)n);
         printf("\nAverage WaitTime = %.2f",totalwt/(float)n);
         return 0;


    
    




}