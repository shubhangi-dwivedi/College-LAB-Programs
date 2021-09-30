#include<stdio.h>
#include<stdlib.h>

void heapify(int a[],int n);
void HeapSort(int a[],int n);
void adjust(int a[],int i,int n);

int main()
{
	int a[100],n,i,x;

	printf("Enter number of elements in the heap : ");
	scanf("%d",&n);

	printf("Enter elements are : ");
    for(i=1;i<=n;i++)
    {
		scanf("%d",&a[i]);
    }


	HeapSort(a,n);

	printf("\nThe sorted Heap after HeapSort is: ");
	for(i=1;i<=n;i++)
    {
		printf("%d ",a[i]);
    }
    printf("\n");

	return 0;
}

void heapify(int a[],int n)
{
	int i;
	for(i=n/2;i>=1;i--)
		adjust(a,i,n);

}

void HeapSort(int a[],int n)
{
	int i,temp;
	heapify(a,n);
	for(i=n;i>=1;i--)
	{
		temp=a[i];
		a[i]=a[1];
		a[1]=temp;
		adjust(a,1,i-1);
	}
}

void adjust(int a[],int i,int n)
{
	int item,j;

	item=a[i];
	j=2*i;

	while(j<=n)
	{
		if(j<n && a[j]<a[j+1])
        {
            j=j+1;
        }

		if(item>=a[j])
        {
            break;
        }

		a[j/2]=a[j];
		j=2*j;
	}

	a[j/2]=item;
}