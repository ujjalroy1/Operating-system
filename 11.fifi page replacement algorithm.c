#include<stdio.h>
int main()
{

    int hit=0;
    int miss=0;
    int n,i;
    int f;
    int pagepointer=0;
    printf("Enter number of page : ");
    scanf("%d",&n);
    int page[n];
    printf("Enter the pages : \n");
    for(i=0;i<n; i++)
    {
        scanf("%d",&page[i]);

    }
    printf("Enter number of Frame : ");
    scanf("%d",&f);
    int frame[f];
    for(i=0;i<f;i++)
    {
        frame[i]=-1;
    }
    for(i=0;i<n;i++)
    {
        int acenai=0;
        for(int j=0;j<f;j++)
        {
            if(page[i]==frame[j])
            {
                acenai=1;
                hit++;
                break;
            }
        }
        if(acenai==0)
        {
            frame[pagepointer]=page[i];
            pagepointer=(pagepointer+1)%f;
            miss++;
        }
        printf("at %dth frame ",i+1);
        for(int j=0;j<f;j++)
        {
            if(frame[j]==-1)
            {
                printf("- ");
            }
            else
            printf("%d ",frame[j]);
        }
        printf("\n");

    }



    printf("total hit : %d\n",hit);
    printf("total miss : %d\n",miss);



    return 0;
}

