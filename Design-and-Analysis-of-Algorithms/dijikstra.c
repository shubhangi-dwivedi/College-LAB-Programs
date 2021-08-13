#include<stdio.h>

void dijkstra(float G[10][10],int n,int v);

int main()
{
	float G[10][10];
	int i,j,n,u;
	printf("Enter no. of vertices:");
	scanf("%d",&n);

	printf("\nEnter the adjacency matrix:\n");
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			scanf("%f",&G[i][j]);
				
	printf("\nEnter the starting node:");
	scanf("%d",&u);
	dijkstra(G,n,u);
	
}
void dijkstra(float G[10][10],int n,int v)
{
 
	float cost[10][10],dist[10],mindist;
	int S[10],num,u,i,j;
	
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
	        if(G[i][j]==0.0f)
				cost[i][j]=9999.0f;
			else
			    cost[i][j]=G[i][j];
			
	
	for(i=1;i<=n;i++)
	{
		S[i]=0;
		dist[i]=cost[v][i];
	}
	
	S[v]=1;
	dist[v]=0.0f;
	num=2;
	
	while(num<=n-1)
	{
		mindist=9999.0f;
	
		for(i=1;i<=n;i++)
			if(dist[i]<mindist && !S[i])
			{
				mindist=dist[i];
				u=i;
			}
						
		S[u]=1;
		for(i=1;i<=n;i++)
			if(!S[i])
				if(dist[i]>mindist+cost[u][i])
					dist[i]=mindist+cost[u][i];

		num++;
	}
	for(i=1;i<=n;i++)
		if(i!=v)
			printf("\nDistance of node %d=%f",i,dist[i]);
			
}