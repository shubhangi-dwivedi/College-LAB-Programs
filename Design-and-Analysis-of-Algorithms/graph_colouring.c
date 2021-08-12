#include<stdio.h>

void mcoloring(int x[], int k, int n, int m, int a[100][100])
{
	int i;

	do
	{
		next_value(x,k,a,m,n);
		if(x[k]==0)
			return;
		if(k==n)
		{
		    printf("The solutions are : ");
		    for(i=1;i<=n;i++)
				printf("%d\t",x[i]);
			printf("\n");
		}
		else
			mcoloring(x,k+1,n,m,a);
	}while(1);
}

void next_value(int x[],int k,int G[100][100],int m,int n)
{
	int j;
	
	do
	{
		x[k]=(x[k]+1)%(m+1);
		
		if(x[k]==0)
			return;

		for(j=1;j<=n;j++)
			if((G[k][j]!=0) && (x[k]==x[j]))
				break;

		if(j== n+1)
			return;
	}while(1);
}

int main()
{
	int a[100][100],n,u,v,i,j,ne;
	int x[100],m;

	printf("Enter no. of vertices : ");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			a[i][j]=0;

	for(i=1;i<=n;i++)
		x[i]=0;

	printf("Enter no. of edges : ");
	scanf("%d",&ne);

	for(i=1;i<=ne;i++)
	{
		printf("\nEnter first terminal of edge : ");
		scanf("%d",&u);
		
		printf("\nEnter end terminal of edge : ");
		scanf("%d",&v);
		
		a[u][v]=1;
		a[v][u]=1;
	}
	
	printf("\n\nThe adjacency matrix is : \n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
			printf("%d ",a[i][j]);
		printf("\n");
	 }

	printf("Enter no. of colours: ");
	scanf("%d",&m);
	
	mcoloring(x,1,n,m,a);

	return 0;
}