#include<stdio.h>
#include<stdlib.h>

void knapsack(int n, float weight[], float profit[], float capacity, float x[], float *tp)
 
 {
	//float totalprofit = 0.0f;
	int i, j, u;
	
	u = capacity;
	
	for (i = 1; i <=n; i++)      //initialize x
		x[i] = 0.0;
	 
	for (i = 1; i <=n; i++)
	{
		if (weight[i] > u)
			break; 
		
	    x[i] = 1.0;
		*tp = *tp + profit[i];
		u = u - weight[i];
		
	}
	 
	if (i <= n)
	{
	
		x[i] = u / weight[i];
		*tp = *tp + (x[i] * profit[i]);
	}

}

int main()
{
	float weight[20], profit[20], capacity;
	int num, i, j, id[20],t;
	float ratio[20], temp;
	float x[20], tp= 0.0f;
	 
	printf("\nEnter the no. of objects:- ");
	scanf("%d", &num);

	printf("\nEnter the weights and profits of each object:- ");
	 
	for (i = 1; i <=num; i++) 
	{
		id[i]=i;
		printf("Enter the profit :- ");
		scanf("%f",&profit[i]);
		printf("Enter the weight :- ");
		scanf("%f",&weight[i]);
	}
 	
	printf("\nEnter the capacity of knapsack:- ");
	scanf("%f", &capacity);
 
	for (i = 1; i <=num; i++)
	{
		ratio[i] = profit[i] / weight[i];
	}
 
	for (i = 0; i < num-1; i++)
	{
		for (j = 1; j <=num-i-1; j++)
		{
			if (ratio[j] < ratio[j+1])
			{
				t = id[j];
	 
	            id[j] = id[j+1];
	            
				id[j+1] = t;
	 			
	            temp = ratio[j];
	 
	            ratio[j] = ratio[j+1];
	            
				ratio[j+1] = temp;
	 
	            temp = weight[j];
	 
	            weight[j] = weight[j+1];
	 
	            weight[j+1] = temp;
	 
	            temp = profit[j];
	 
	            profit[j] = profit[j+1];
	 
	            profit[j+1] = temp;
			}
		}
	}
 
 
	knapsack(num, weight, profit, capacity,x, &tp);
	
	for (i = 1; i <=num; i++)
		printf("The amount of fraction for item %d considered for the knapsack : %f\n",id[i], x[i]);

	printf("Total profit is : %f",tp);
		
	return(0);

}