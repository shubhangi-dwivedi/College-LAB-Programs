#include<stdio.h>
void weighted(int p[],int i,int j);
int collapsingfind(int p[],int i);
int main()
{
	int n,num,p[100],totele,ele,root,i,j,k,val;

    printf("Enter the no. of elements in the set : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++) //method 1
        p[i]=-1;

    //method 2
	/*
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
    */
	printf("The elements stored in the parent array are:\n");
	for(i=1;i<=n;i++)
	  printf("p[%d]\t",i);
	printf("\n");

    for(i=1;i<=n;i++)
	  printf("%d\t",p[i]);
      printf("\n");
	
    printf("Enter the root node values whose union is to be performed: ");
    scanf("%d",&i);
    scanf("%d",&j);
    weighted(p,i,j);

    printf("The elements stored in the parent array are:\n");
    for(i=1;i<=n;i++)
     printf("p[%d]\t",i);
     printf("\n");
    for(i=1;i<=n;i++)
     printf("%d\t",p[i]);
    printf("\n");
    
	printf("Enter the value whose parent you have to find: ");
    scanf("%d",&val);
    k=collapsingfind(p,val);
    printf("The parent of %d is %d",val,k);
    return 0;
}
void weighted(int p[],int i,int j)
{
	 int temp;
	 temp=p[i]+p[j];
	 if(p[i]>p[j])
	 {
	 	 p[i]=j;
	 	 p[j]=temp;
	 }
	 else
	 {
	 	p[j]=i;
	 	p[i]=temp;
	 }
}
int collapsingfind(int p[],int i)
{
	 int r,s;
	 r=i;
	 while(p[r]>0)
	 {
	 	 r=p[r];
	 }
	 while(p[i]!=r)
	 {
	 	 s=p[i];
	 	 p[i]=r;
	 	 i=s;
	 }
	 return r;
}