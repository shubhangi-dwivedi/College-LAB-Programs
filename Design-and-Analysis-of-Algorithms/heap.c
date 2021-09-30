#include<stdio.h>

//80 45 70 40 35 50 90

void insert(int a[100], int n)
{
    int i, item ;
    i=n;
    item=a[n];

    while((i>1) && (a[i/2]<item))
    {
        a[i]=a[i/2];
        i=i/2;
    }
    a[i]=item;

}

void del_max(int a[100],int n, int *x)
{
    if(n==0)
    {
       printf("Heap empty") ;
    }

    *x=a[1];
    a[1]=a[n];
    adjust(a,1,n-1);
}

void adjust(int a[100], int i, int n)
{
    int j,item;
    item=a[i];
    j=i*2;

    while(j<=n)
    {
        if((j<n)&&(a[j]<a[j+1]))
        {
            j=j+1;
        }
        if(item>a[j])
        {
            break;
        }
        a[j/2]=a[j];
        j=2*j;
    }
    a[j/2]=item;
}

void sort(int a[100], int n)
{
    int i,x;

    for(i=1;i<=n;i++)
    {
        insert(a,i);
    }

    for(i=n;i<=1;i--)
    {
        del_max(a,i,&x);
        a[i]=x;
    }
}

int main()
{
    int n, a[100], i,x;
    printf("Enter size of array : ");
    scanf("%d",&n);

    printf("Enter the element : ");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }

    insert(a,n);

    printf("\nElements are : ");
    for(i=1;i<=n;i++)
    {
        printf(" %d ",a[i]);
    }


   printf("\nDeleting max. element of heap ");
    del_max(a,n,&x);
    printf("\nDeleted element of heap is : %d",x);

    printf("\n\nelements are : ");
    for(i=1;i<=n;i++)
    {
        printf(" %d ",a[i]);
    }

    printf("\nSorting using Heap output : ");
    sort(a,n);
    for(i=1;i<=n;i++)
    {
        printf(" %d ",a[i]);
    }

    return 0;
}
