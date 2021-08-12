#include<stdio.h>
//#include<stdlib.h>

float prims(float cost[10][10], int n, int t[10][10]);

int main()
{
    int x,y,t[10][10],n,e,i,j;
    float cost[10][10],mincost,c;

    printf("Enter total no. of vertices in the graph : ");
    scanf("%d",&n);

    printf("Enter total no. of edges : ");
    scanf("%d",&e);

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(i==j)
                cost[i][j]=0.0f;
            else
                cost[i][j]=9999.0;
        }
    }

    for(i=1; i<=e; i++)
    {
        printf("Enter 1st terminal : ");
        scanf("%d",&x);

        printf("Enter 2nd terminal : ");
        scanf("%d",&y);

        printf("Enter the cost associated with the edge %d & %d : ",x,y);
        scanf("%f",&c);
        cost[x][y]=c;
        cost[y][x]=c;
    }

    printf("\nCost representation of graph :\n");
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
            printf(" %f ",cost[i][j]);
        printf("\n");
    }

    mincost=prims(cost,n,t);

    printf("\nMinimum cost of spanning tree : %f",mincost);

    printf("\n");

    printf("Edges included in minimum cost spanning tree : \n");
    for(i=1; i<=n-1; i++)
        printf("\n%d %d",t[i][1],t[i][2]);

    return 0;
}

float prims(float cost[10][10], int n, int t[10][10])
{
    float mincost, min=9999.0;
    int i,j,k,l,p,near[10];

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(cost[i][j]!=0.0 && min>cost[i][j])
            {
                min=cost[i][j];
                k=i;
                l=j;
            }
        }
    }

    t[1][1]=k;
    t[1][2]=l;

    mincost=cost[k][l];

    for(i=1;i<=n;i++)
    {
        if(cost[i][k] < cost[i][l])
            near[i]=k;
        else
            near[i]=l;
    }
    
    near[k]=0;
    near[l]=0;

    for(i=2;i<=n-1;i++)
    {
        min=9999;
        for(p=1; p<=n; p++)
        {
            if(near[p]!=0 && cost[p][near[p]]<min)
            {
                min=cost[p][near[p]];
                j=p;
            }
        }
        t[i][1]=j;
        t[i][2]=near[j];

        mincost= mincost + cost[j][near[j]];

        near[j]=0;
        for(k=1;k<=n;k++)
            if(near[k]!=0 && cost[k][near[k]] > cost[k][j])
                near[k]=j;
    }
    return mincost;
}
