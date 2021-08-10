#include<stdio.h>

void bsort(int a[], int); //bubble sort
void ssort(int a[], int); //selection sort
void isort(int a[], int); //insertion sort

int main()
{
	int a[10],i,n,ch;
	printf("enter the size of array: ");
	scanf("%d",&n);
	printf("enter the array elements ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	while(ch<4)
    {
	printf("\nEnter your choice \n1.bubble sort\n2.selection sort\n3.insertion sort \n4.EXIT");
	scanf("%d",&ch);
	switch(ch)
	{
            case 1:
                bsort(a,n);
                break;
            case 2:
                ssort(a,n);
                break;
            case 3:
                isort(a,n);
                break;
            default:
                printf("EXIT");
        }
    }
	return 0;
}

//optimized bubble sort
void bsort(int a[10], int n)
{
	int i,j,temp,flag=1;
	for(i=1;i<n&&flag==1;i++)
	{
	    flag=0;
		for(j=0;j<=n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				flag=1;
			}
		}
	}
	printf("\nbubble sorted array is :");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}


//selection sort
void ssort(int a[10], int n)
{
	int i,j,min,temp;
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[min]>a[j])
			{
				min=j;
			}
		}
        if(min!=i)
        {
            temp=a[i];
            a[i]=a[min];
            a[min]=temp;
        }
	}
	printf("\nselection sorted array is : ");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}


//insertion sort
void isort(int a[10], int n)
{
	int i, key, j;

    for (i=1;i<n;i++)
	{
        key=a[i];
        j=i-1;
        while(j>=0&&a[j]>key)
		{
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=key;
	}

	printf("\ninsertion sorted array is : ");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}
