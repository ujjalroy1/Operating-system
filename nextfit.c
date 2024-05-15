#include<stdio.h>
int main()
{
      int n,m,i,j;
      printf("Enter number of process : ");
      scanf("%d",&n);
      printf("enter number of block : ");
      scanf("%d",&m);
      printf("enter process : ");
      int arr[n+1],brr[m+1];
      int p[n+1];
      for(int i=1;i<=n;i++)
      {
          scanf("%d",&arr[i]);
          p[i]=-1;
      }
      printf("Enter blocks : ");
      for(int i=1;i<=m;i++)
      {
          scanf("%d",&brr[i]);
      }
     int use[n+1];
      for(i=1;i<=n;i++)
      {

             use[i]=-1;
      }
      int lastpos=1;
      for(i=1;i<=n;i++)
      {
            int cnt=0;
             j=lastpos;
          while(1)
          {
              if(cnt>m)break;

              if(j>m)j=1;
              cnt++;
              //printf("%d %d\n",i,j);
             if(brr[j]>=arr[i]&&p[j]==-1)
             {
                 p[i]=j;
                 brr[j]-=arr[i];
                 lastpos=j;

                 break;
             }
              j++;
          }
      }
      for(i=1;i<=n;i++)
      {

          if(p[i]==-1)
          {
              printf("%d th is not allocated\n",i);

          }
          else
          {
               printf("%d th is allocated at %d \n",i,p[i]);


          }
      }

}

