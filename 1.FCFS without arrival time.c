#include<stdio.h>
int main()
{
    printf("Enter number of process : ");
    int n;
    scanf("%d",&n);
    int burst[n];
    printf("enter burst time : ");
    for(int i=0;i<n;i++)
    {
         scanf("%d",&burst[i]);
        
    }
    int tur[n];
    tur[0]=burst[0];
   double avgtur=0.0,avgwt=0.0;
    printf("turnaround time : \n");
     printf("%d ",tur[0]);
    for(int i=1;i<n;i++)
    {
        tur[i]=tur[i-1]+burst[i];
        avgtur=avgtur+(double)tur[i];
        printf("%d ",tur[i]);
    }
    int wt[n];
   printf("\nwaiting time : \n");
    for(int i=0;i<n;i++)
    {
           wt[i]=tur[i]-burst[i];
          avgwt=avgwt+(double)wt[i];
          printf("%d ",wt[i]);
    }
   avgtur/=(double)n;
    avgwt/=(double)n;
    printf("\naverage turnaround time : %.2lf\n",avgtur);
   printf("average waiting time : %.2lf\n",avgwt);


    return 0;
}
