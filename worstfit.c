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
      for(i=1;i<=n;i++)
      {
            int mi=-100000;
            int pos=-1;
          for(j=1;j<=m;j++)
          {
              if(brr[j]>=arr[i]&&p[j]==-1)
              {
                  int x=brr[j]-arr[i];
                  if(x>mi)
                  {
                     pos=j;
                     mi=x;
                     brr[j]-=arr[i];
                  }

              }

          }
          if(pos!=-1)
          {
              p[i]=pos;
              pos=-1;


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


    return 0;
}
