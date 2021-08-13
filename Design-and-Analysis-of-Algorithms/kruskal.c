#include<stdio.h>

int G[20][20],E[20],P[20],ne,n;

void adjust(int i)
{
	int j,item =E[i];
	
	j=(2*i);
	
	while(j<=ne)
	{
		if(j<ne && E[j]>E[j+1])
		j=j+1;
		
		if(E[j]>=item)
		break;
		
		E[j/2]=E[j];
		j=j*2;
	}
	E[j/2]=item;
}

void heapify()
{
	int i;
	
	for(i=ne/2;i>=1;i--)
		adjust(i);
}

int delete_heap()
{
	int x;
	
	x=E[1];
	E[1]=E[ne];
	ne--;
	
	adjust(1);
	
	return x;
}

int find(int v1)
{
	while(P[v1]>=0)  
		v1=P[v1];

	return v1;
}

void union_graph(int v1,int v2)
{
	P[v1]=v2;
}

void kruskals()
{
	int i,t[20][20],mincost=0,v1,v2,x,q,p,s,r;
	
	heapify();
	
	printf("\nArray after min heap\n");	
	for(i=1;i<=ne;i++)
		printf("%d \t",E[i]);
	
	for(i=1;i<=n;i++)
		P[i]=-1;
	
	i=0;
	
	while(i<n-1 && ne>0)
	{
		x=delete_heap();
		
		for(p=1;p<=n;p++)
			for(q=1;q<=n;q++)
				if(G[p][q]==x)
				{
					v1=p;
					v2=q;
				}
		
		s=find(v1);
		r=find(v2);
		
		if(s!=r)
		{
			i++;
			t[i][1]=v1;
			t[i][2]=v2;
			union_graph(v1,v2);
			mincost=mincost+G[v1][v2];	
		}
	}
	
	if(i!=n-1)
		printf("NO MINIMUM SPANNING TREE FORMED\n");
	
	else
	{
		printf("\nSPANNING TREE\n");
	
		for(i=1;i<=n-1;i++)
		{ 
			printf("Edge(%d,%d) Cost=%d",t[i][1],t[i][2],G[t[i][1]][t[i][2]]);
			printf("\n");
		}
		printf("Cost of MST= %d",mincost);
	}
}

int main()
{
	int i,j,v1,v2,w;
	
	printf("enter the total number of vertices : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			G[i][j]=999;
	
	printf("enter the total number of edges : ");
	scanf("%d",&ne);
	
	for(i=1;i<=ne;i++)
	{ 
        printf("Enter 1st terminal : ");
        scanf("%d",&v1);

        printf("Enter 2nd terminal : ");
        scanf("%d",&v2);

        printf("Enter the cost associated with the edge %d & %d : ",v1,v2);
        scanf("%d",&w);
        
		G[v1][v2]=w;
		G[v2][v1]=w;
		E[i]=w;
	   /* printf("enter the vertices and the weight between them\n");
		scanf("%d%d%d",&v1,&v2,&w);
		G[v1][v2]=w;
		G[v2][v1]=w;
		E[i]=w;	
		*/
	}
	
	printf("THE ADJACENTRY MATRIX IS - \n");
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
			printf("%d\t",G[i][j]);
		printf("\n");
    }
	kruskals();

	return 0;
}
