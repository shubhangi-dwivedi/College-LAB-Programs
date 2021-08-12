#include<stdio.h>
#include<conio.h>


int linear_search(int a[10], int x , int n) //linear search
{
	int i,flag=0;
	for(i=0;i<n;i++)
	{
		if(a[i]==x)
		{
			flag=1;
			break;
		}
	}

	if(flag==1)
    {
        printf("element found at position : %d",i+1);
    }
    else
    {
        printf("Element not found");
    }
	return 0;
}

int bsearch(int a[10], int x) //binary search
{
	int mid, ub=9,lb=0,flag=0;
	mid=(lb+ub)/2;
	while(lb<=ub)
	{
		if(a[mid]<x)
		{
			lb=mid+1;
		}
		else if(a[mid]==x)
		{
			flag=1;
			break;
		}
		else if(a[mid]>x)
		{
			ub=mid-1;
		}
		mid=(lb+ub)/2;
	}
	if(flag==1)
	{
		printf("element found at index %d", mid);
	}
	else
	{
		printf("element not found");
	}
	return 0;
}
int main()
{
	int a[10], n, i, ch, x;
	printf("enter the size of array ");
	scanf("%d",&n);
	printf("enter the elements of array :\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the element you want to search");
	scanf("%d",&x);
	printf("enter 1.linear search \n 2.binary search\n");
	scanf("%d",&ch);
	switch(ch)
		{
			case 1:
				linear_search(a,x,n);
				break;
			case 2:
				bsearch(a,x);
				break;
			default:
				printf("wrong input");

		}

}
