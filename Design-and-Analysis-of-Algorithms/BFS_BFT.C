#include<stdio.h>

#define MAX 10

int n,visited[10]; 
int a[10][10];

//QUEUE
int isEmpty(int front,int rear)
{
	if((front==-1) && (rear==-1))
		return 1;
	else
		return 0;	
}

int isFull(int rear)
{
	if(rear==MAX-1)
		return 1;
	else
		return 0;
}

void enqueue(int queue[],int *front,int *rear,int x)
{
	if(isFull(*rear))
		printf("\nqueue is full");
	else
		if((*front==-1)&&(*rear==-1))
		{
			*front=*rear=0;
			queue[*rear]=x;
		}
		else
		{
			*rear=*rear+1;
			queue[*rear]=x;
		}
}

int dequeue(int queue[],int *front,int *rear,int *pos)
{
	int x;
	if(isEmpty(*front,*rear))
		return 0;
	else
		if(*front==*rear)
		{
			x=queue[*front];
			*front=*rear=-1;
			return x;
		}
		else
		{
			x=queue[*front];
			*front=*front+1;
			return x;
		}
}


//Breadth first search
void BFS(int v)
{
	int i,u,un,res[n],j=1;
	int front=-1 ,rear=-1,queue[MAX],pos=0;
	
	for(i=1;i<=n;i++)
		visited[i]=0;
	
	u=v;
	enqueue(queue,&front,&rear,v);
	visited[v]=1;
	printf(" %d ",u);
	u=dequeue(queue,&front,&rear,&pos);
	
	while(u!=0)
	{
		for(i=1;i<=n;i++)
		{
			if(a[u][i]!=0 && visited[i]==0)
			{
				enqueue(queue,&front,&rear,i);
				visited[i]=1;
				printf("%d ",i);
			}
		}		

		if(isEmpty(front,rear))
			return;
					
		u=dequeue(queue,&front,&rear,&pos);
		
	}	
}

//Breadth First Traversal
void BFT()
{
	int i;

	for(i=1;i<=n;i++)
		visited[i]=0;
	
	for(i=1;i<=n;i++)
		if(visited[i]==0)
			BFS(i);
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
    	printf("\n\nenter\n1. BFS\n2. BFT\n3. exit \nyour choice : ");
	    scanf("%d",&ch);
	    	
		printf("\nenter the source vertex : ");
    	scanf("%d",&v);
	    	
	    switch(ch)
		{
    		case 1:
	    		printf("\n\nBreadth First Search: \n");
				BFS(v);
    			break;

	    	case 2:
	    		printf("Breadth First Traversal : \n");
				BFT();
    			break;

    		default:printf("invalid choice ");
		}
	
		printf("\nenter 1 to continue else 0 : ");
		scanf("%d",&cont);	    	
	}while(cont);
	
	return 0;
}