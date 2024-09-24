
 #include<stdio.h>

int main()
{

    int quntum,i;
    printf("Enter time quantum : ");
    scanf("%d",&quntum);
     printf("Enter number of process : ");
     int n;
     scanf("%d",&n);
     int process[n],burst[n];
     int queue[10000];
     int posc[100000];
     printf("enter process and burst time : \n");
     for(i=0;i<n;i++)
     {
          scanf("%d%d",&process[i],&burst[i]);
          queue[i]=burst[i];
          posc[i]=process[i];
     }
     int pos=0;
     int rem=n;
     int com[n];
     int anspos[n];
     int k=0;
     int time=0;
     while(1)
     {
         if(rem<=0)break;
         if(queue[pos]<=quntum&&queue[pos]>0)
         {
              anspos[k]=posc[pos];
                time+=queue[pos];
              com[k]=time;
              queue[pos]=-1;
              k++;
              rem--;
              pos++;
         }
         else
         {
             time+=quntum;
            queue[pos]-=quntum;

           queue[pos+rem]=queue[pos];
           posc[pos+rem]=posc[pos];
           pos++;

         }




     }
     int turn[n];
     int wt[n];
     double avet=0.0;
     double avew=0.0;
     printf("position\t\tturnaround time\t\twaiting time : \n");
      for(i=0;i<n;i++)
         {
            // printf("%d %d\n",anspos[i],com[i]);
              turn[i]=com[i];
              avet+=turn[i];

              wt[i]=turn[i]-burst[anspos[i]-1];
              avew+=wt[i];
               printf("%d\t\t\t%d\t\t\t%d\n",anspos[i],turn[i],wt[i]);
         }
         avet/=n;
         avew/=n;
         printf("average turn around time : %.2lf\n",avet);
        printf("average waiting time : %.2lf\n",avew);

}
