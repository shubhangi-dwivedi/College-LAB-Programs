#include<stdio.h>

void insert(int a[100], int n)
{

    int i, item ;
    i=n;
    item=a[n];

    while((i>1) && (a[i/2]>item))
    {
        a[i]=a[i/2];
        i=i/2;
    }
    a[i]=item;

}

//80 45 70 40 35 50 90

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

    printf("\n\nElements are : ");
    for(i=1;i<=n;i++)
    {
        printf(" %d ",a[i]);
    }


    return 0;
}