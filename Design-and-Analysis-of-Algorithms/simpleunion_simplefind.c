#include<stdio.h>
void simpleunion(int p[],int i,int j);
int simplefind(int p[],int i);
int main()
{
	int n,num,p[100],totele,ele,root,i,j,k,val;
	printf("Enter the total elements in the disjoint set: ");
	scanf("%d",&n);
	printf("Enter the number of disjoint sets: ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		printf("Enter the total elements in the set: ");
		scanf("%d",&totele);
		for(j=1;j<=totele;j++)
		{
			printf("Enter the element number %d ",j);
			scanf("%d",&ele);
			if(j==1)
			{
				p[ele]=-1;
				root=ele;
			}
			else
			    p[ele]=root;
		}
	}
	printf("The elements stored in the parent array are:\n");
	for(i=1;i<=n;i++)
	  printf("%d ",p[i]);

	printf("\n");
    
    printf("Enter the root node values whose union is to be performed: ");
    scanf("%d",&i);
    scanf("%d",&j);
    simpleunion(p,i,j);
    printf("The elements stored in the parent array are:\n");
    for(i=1;i<=n;i++)
     printf("%d ",p[i]);
    printf("\n");
	printf("Enter the value whose parent you have to find: ");
    scanf("%d",&val);    
    k=simplefind(p,val);
    printf("The parent of %d is %d",val,k);
    return 0;
}
void simpleunion(int p[],int i,int j)
{
	 p[i]=j;
}
int simplefind(int p[],int i)
{
	while(p[i]>=0)
	{
		i=p[i];
	}
	return i;
}