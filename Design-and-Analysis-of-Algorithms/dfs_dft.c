#include<stdio.h>

#define MAX 10

int n,visited[10],a[MAX][MAX];

//STACK
int underflow(int top)
{
	if(top==-1)
		return 1;
	else
		return 0;
}
int overflow(int top)
{
	if(top==MAX-1)
		return 1;
	else
		return 0;	
}
void push(int stk[],int *top,int x)
{
	if(overflow(*top))
		//printf("\nstack is full");
		return ;
	else
	{
		*top=*top+1;
		stk[*top]=x;
		//printf("\nelement %d is inserted",x);
	}
}
int pop(int stk[],int *top)
{
	if(underflow(*top))
		return 0;
		//printf("\nstack is empty");
	else
	{
		int x;
		x=stk[*top];
		*top=*top-1;
		//printf("element deleted is %d" ,x);
		return x;
	}
}

//depth first search
void DFS(int v)
{
	int i,u,t,stk[MAX],top=-1;
	
	u=v;
	push(stk,&top,v);
	visited[v]=1;
	printf(" %d ",u);
	
	for(i=1;i<=n;i++)
	{
		if(a[u][i]!=0 )
		{
			if(visited[i]==0)
				DFS(i);
			t=pop(stk,&top);
		}
		
	}
}

//Depth First Traversal
void DFT()
{
	int i;
	
	for(i=1;i<=n;i++)
		visited[i]=0;
		
	for(i=1;i<=n;i++)
		if(visited[i]==0)
			DFS(i);
}

int main()
{
	int i,j,v,ch,x,c,b,cont,ne;
	
	
	printf("enter no. of vertices : ");
	scanf("%d",&n);

	printf("enter no. of edges : ");
	scanf("%d",&ne);
	
	for(i=1;i<=ne;i++)
	{
		printf("\nenter first terminal of edge %d : ",i);
		scanf("%d",&c);
		
		printf("\nenter end terminal of edge %d : ",i);
		scanf("%d",&b);
		
		a[c][b]=1;
	}
	
	printf("\n\nthe adjacency matrix is : \n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
			printf("%d ",a[i][j]);
		
		printf("\n");
	}
	do
    {
	    printf("\n\nenter\n1. DFS\n2. DFT\n3. exit \nyour choice : ");
		scanf("%d",&ch);
	    	
    	printf("\nenter the source vertex : ");
	    scanf("%d",&v);
	    	
		switch(ch)
    	{
	    	case 1:
	    		printf("\n\nDepth First Search: \n");
				DFS(v);
    			break;

	    	case 2:
	    		printf("Depth First Traversal: \n");
				DFT(v);
    			break;
					    	
			default:printf("invalid choice ");
		}
		
		printf("\nenter 1 to continue else 0 : ");
		scanf("%d",&cont);	    	
	}while(cont);
	
	return 0;
}