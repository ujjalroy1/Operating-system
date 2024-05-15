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
      for(i=1;i<=n;i++)
      {
          for(j=1;j<=m;j++)
          {
             if(brr[j]>=arr[i]&&p[j]==-1)
             {
                 p[i]=j;
                 brr[j]-=arr[i];

                 break;
             }
          }
      }
      for(i=1;i<=n;i++)
      {
           if(p[i]==-1)printf("Not allocated ");
           else printf("%d ",p[i]);
      }

}
