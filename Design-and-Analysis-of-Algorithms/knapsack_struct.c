#include<stdio.h>

#define MAX 50

struct ITEMS
{
	int n;
	float profit;
	float weight;
	float ratio;
};

void greedy_knapsack(struct ITEMS knap[], int n,int capacity, float *tp)
{
	int i,j,u;
	
	u=capacity;

	/*for(i=1;i<=n;i++)
		knap[i].ratio=0.0;*/
		
	for(i=1;i<=n;i++)
	{
		if(knap[i].weight>u)
			break;
			
		knap[i].ratio=1.0;
		*tp= *tp + knap[i].profit;	
		u=u-knap[i].weight;
	}

	if(i<=n)
	{
		knap[i].ratio= u / knap[i].weight;
		*tp = *tp + (knap[i].ratio * knap[i].profit);
	}
}

int main()
{
	struct ITEMS knap[MAX], t;
	int m,w,i,j,flag;
	float tp=0.0f;
	
	printf("\nEnter no. of elements : ");
	scanf("%d",&m);
	
	printf("\nEnter Knapsack capacity : ");
	scanf("%d",&w);
	
	printf("\n*****Entering details of knapsack***** \n");
	for(i=1 ; i<=m ; i++)
	{
		printf("\nEnter details of %d ITEMS\n",i);
		knap[i].n=i;
		printf("Enter profit of %d ITEMS : ",i);
		scanf("%f",&knap[i].profit);
		printf("\n\nEnter weight of %d ITEMS : ",i);
		scanf("%f",&knap[i].weight);
		knap[i].ratio = (knap[i].profit) / (knap[i].weight);
		printf("Ratio of %d ITEMS : %f",i,knap[i].ratio);
	}
	
	printf("\nPrinting details of ITEMS :");
	for(i=1 ; i<=m ; i++)
	{
		printf("\n\nItem %d",knap[i].n);	
		printf("\nProfit of %d ITEMS : %f",knap[i].n,knap[i].profit);
		printf("\nWeight of %d ITEMS : %f",knap[i].n,knap[i].weight);
		printf("\nRatio of %d ITEMS : %f",knap[i].n,knap[i].ratio);
	}
	
	printf("\n\n*****Sorting of ITEMS according to their ratio*****\n");
	flag=1;
	for(i=0;i<m-1 && flag==1;i++)
	{
		flag=0;
		for(j=1; j<=m-i-1 ;j++)
		{
			if(knap[j].ratio < knap[j+1].ratio) //swapping structure of arrays
			{	
				t=knap[j]; 
				knap[j]=knap[j+1];
				knap[j+1]=t;
				
				flag=1;
			}
		}
	}
	
	printf("\nPrinting details of ITEMS after sorting: \n");
	for(i=1;i<=m;i++)
	{
		printf("\n\nItem %d",knap[i].n);	
		printf("\nProfit of %d ITEMS : %f",knap[i].n,knap[i].profit);
		printf("\nWeight of %d ITEMS : %f",knap[i].n,knap[i].weight);
		printf("\nRatio of %d ITEMS : %f",knap[i].n,knap[i].ratio);
	}
	
	greedy_knapsack(knap,m,w,&tp);
	
	printf("\n\nprinting knapsack fraction of ITEMS : \n");
	for(i=1;i<=m;i++)
		printf("The amount of fraction for ITEMS %d considered for the knapsack : %f\n",knap[i].n, knap[i].ratio);
	
	printf("Total profit is : %f",tp);
	
	return 0;
}