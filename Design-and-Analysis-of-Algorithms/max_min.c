//MAX-MIN elements

#include<stdio.h>

void MaxMin(int a[],int i,int j,int *max, int *min)
{
	int mid,max1,min1;
	
	if(i==j)
		*max=*min=a[i];
	else
	{
		if(i==j-1)
		{
			if(a[i]<a[j])
			{
				*min=a[i];
				*max=a[j];
			}
			else
			{
				*min=a[j];
				*max=a[i];
			}
		}
		else
		{
			mid=(i+j)/2;
			
			MaxMin(a,i,mid,max,min);
			MaxMin(a,mid+1,j,&max1,&min1);
			
			if(*max<max1)
				*max=max1;
			if(*min>min1)
				*min=min1;
		}
	}
}

/*
void display(int a[],int n)
{
	int i;
	for(i=1;i<=n;i++)
	{
		printf("%d ",a[i]);
	}
}
*/

int main()
{
	int i,n,a[20],max,min;
	
   printf("\nenter size of list: ");
   scanf("%d",&n);
   
   printf("\nenter list: ");
   for(i=1;i<=n;i++)
   		scanf("%d",&a[i]);
    
    //printf("\nprinting elements : ");
    //display(a,n);
    
    printf("\nfinding MAX and MIN: ");
    MaxMin(a,1,n,&max,&min);
    
   printf("\nMAX = %d \nMIN = %d",max,min);
   
   return 0;
}