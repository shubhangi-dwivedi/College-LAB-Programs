#include<stdio.h>
#include<stdlib.h>

void HeapSort(int a[],int n);
void Adjust(int a[],int i,int n);
void heapify(int a[],int n);

int main()
{
	int a[40],n,i,x;

	printf("Enter number of elements in heap= ");
	scanf("%d",&n);
	printf("Enter elements= ");


	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);

	HeapSort(a,n);

	printf("\nSorted Heap is: ");

	for(i=1;i<=n;i++)
		printf("%d ",a[i]);
	return 0;
}


void HeapSort(int a[],int n)
{
	int i,t;
	heapify(a,n);
	for(i=n;i>=1;i--)
	{
		t=a[i];
		a[i]=a[1];
		a[1]=t;
		Adjust(a,1,i-1);
	}
}

void heapify(int a[],int n)
{
	int i;
	for(i=n/2;i>=1;i--)
		Adjust(a,i,n);

}

void Adjust(int a[],int i,int n)
{
	int ele,j;

	ele=a[i];
	j=2*i;

	while(j<=n)
	{
		if(j<n && a[j]<a[j+1])
			j=j	+1;

		if(ele>=a[j])
			break;

		a[j/2]=a[j];
		j=2*j;
	}

	a[j/2]=ele;
}
