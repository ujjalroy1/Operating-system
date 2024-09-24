 #include<stdio.h>

 int process[100],burst[100];
 void sort(n)
 {

       for(int i=0;i<n-1;i++)
       {
          for(int j=0;j<n-1-i;j++)
          {
               if(burst[j]>burst[j+1])
               {
                    int temp=burst[j];
                    burst[j]=burst[j+1];
                    burst[j+1]=temp;

                    temp=process[j];
                    process[j]=process[j+1];
                    process[j+1]=temp;
               }
          }
       }
 }
int main()
{

      printf("enter  number of process  : ");
      int n,i,j;
      scanf("%d",&n);

      printf("Enter process and burst time : \n");
      for(i=0;i<n;i++)
      {
           scanf("%d%d",&process[i],&burst[i]);
      }
     sort(n);

      int turn[n];
      turn[0]=burst[0];
      int wt[n];
      wt[0]=0;
      double avet=0.0;
      double avew=0.0;

      for(i=1;i<n;i++)
      {
         turn[i]=turn[i-1]+burst[i];
         avet+=(double)(turn[i]);

         wt[i]=turn[i]-burst[i];
         avew+=(double)wt[i];
      }
      printf("process\t\tturn around time\t\t\twaiting time\n");
      for(i=0;i<n;i++)
      {
         printf("%d\t\t\t%d\t\t\t\t\t%d\n",process[i],turn[i],wt[i]);
      }

       printf("\naverage turn around time is : %.2lf\n",avet);
      printf("\naverage waiting time is : %.2lf\n",avew);


    return 0;
}
