#include<stdio.h>

int greedy_job(int d[], int J[], float p[], int n, float *tp)
{
    int i, q, r, k;
    
    d[0]=J[0]=0;
    J[1]=1;
    k=1; //no. of jobs take
    *tp= *tp + p[1];

    for(i=2 ; i<=n ; i++)
    {
        r=k;

        while((d[J[r]]>d[i]) && (d[J[r]]!=r)) //or,  while(d[J[r]]>d[i] && d[J[r]]<r) //checking whether shifting is requried if deadline of current job is less than pervious ones
            r--;

        if((d[J[r]]<=d[i]) && (d[i]>r)) //checking feasibility
        {
            for( q=k ; q>=r+1 ; q-- ) //shifting existing job downwards is current jobs deadline is less than them
                J[q+1] = J[q];

            J[r+1]=i; //insert the job in sequence
            k=k+1; //increase job count
            *tp= *tp + p[i]; //total profit
        }
    }
    return k;
}

int main()
{
    int n,d[10],J[10],i,k;
    float p[10],tp;

    printf("Enter the no. of jobs : ");
    scanf("%d",&n);

    //n=4 
    //profit = 100 27 15 10
    //deadline= 2 1 2 1
    for(i=1;i<=n;i++)
    {
        printf("Enter the PROFIT, DEADLINE resp.(decreasing order) %d :",i);
        scanf("%f",&p[i]);
        scanf("%d",&d[i]);
    }

    printf("PROFITS\n");
    for(i=1;i<=n;i++)
        printf("\t%f\t",p[i]);
    
    printf("\nDEADLINES \n");
    for(i=1;i<=n;i++)
        printf("\t%d\t",d[i]);
    
    k=greedy_job(d,J,p,n,&tp);

    printf("\n\nTotal profit: %f",tp);
    /*printf("\n\nTotal profit: %f\nThe sequence of jobs is ",tp);
    for(i=1;i<=k;i++)
        printf("\t%d\t",d[i]);*/

    return 0;
}