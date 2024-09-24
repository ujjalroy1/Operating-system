#include<stdio.h>
int main()
{

    int hit=0;
    int miss=0;
    int n,i;
    int f;
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
    for(i=0; i<f; i++)
    {
        frame[i]=-1;
    }
    for(i=0; i<n; i++)
    {
        int aceNaNai=0;
        for(int j=0; j<f; j++)
        {
            if(frame[j]==page[i])
            {
                aceNaNai=1;
                break;
            }
        }
        if(aceNaNai==1)
        {
            hit++;
        }
        else
        {
            miss++;
            int paici=0;
            for(int j=0; j<f; j++)
            {
                if(frame[j]==-1)
                {
                    frame[j]=page[i];
                    paici=1;
                    break;
                }
            }
            if(paici==0)
            {
                   int distance=i;
                    int pos=0;
                for(int k=0; k<f; k++)
                {

                    int found=0;
                    for(int j=i+1; j<n; j++)
                    {

                        if(frame[k]==page[j])
                        {
                            found=1;
                            if(j>distance)
                            {
                                pos=k;
                                distance=j;
                            }
                            break;
                        }
                    }
                    if(found==0)
                    {
                          pos=k;
                          break;
                    }
                }
                frame[pos]=page[i];


            }

        }
        printf("At the %dth stape the state : ",i+1);
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
