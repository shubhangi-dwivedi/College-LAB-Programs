#include<stdio.h>

#define MAX 50
int m;

void sumofSub(int w[MAX],int x[MAX], int s, int k, int r, int m, int n)
{
    int i;
    x[k]=1;

    if(s + w[k] == m)
       {
            printf("\nSubsets are: ");
            for(i=1 ; i<=n ; i++)
                printf("%d ",x[i]);
            printf("\n");
       }

    else
        if((s + w[k] + w[k+1]) <= m)
            sumofSub(w,x,s+w[k], k+1, r-w[k], m, n);

    if(((s + r - w[k])>=m) && ((s + w[k+1])<=m))
    {
        x[k]=0;
        sumofSub(w,x,s, k+1, r-w[k], m, n);
    }    
}

int main()
{
    int set[MAX], x[MAX],i, n, r=0, s=0, m;

    printf("Enter no. of values : ");
    scanf("%d", &n);
    
    printf("\nEnter values in increasing order : ");
    for(i=1 ; i <=n ; i++)
        scanf("%d",&set[i]);

    //Sum of given elements
    for(i=1; i<=n; i++)
        r+=set[i];

    for(i=1;i<=n;i++)
        x[i]=0;

    printf("\nEnter the sum : ");
    scanf("%d",&m);
    
    sumofSub(set,x,s,1,r,m,n);

    return 0;
}