#include<stdio.h>

int bsearch(int a[100],int x,int n)
{
    int mid,low=1,high=n+1;

    while(low<(high-1))
    {
        mid=(low+high)/2;

        if(x<a[mid])
            high=mid;
        else
            low=mid;
    }

    if(x==a[low])
        return low;
    
    else 
        return 0;
}

int main()
{
    int a[100], result,n,t,x,r,i,l=1;

    printf("Enter no. of the array elements : ");
    scanf("%d",&n);

    printf("Enter the array elements in sorted order : ");
    for(i=1;i<=n;i++)
        scanf("%d",&a[i]);

    printf("Enter the element you want to search : ");
    scanf("%d",&x);

    result=bsearch(a,x,n);

    if(result>0)
        printf("Element found at position : %d", result);
    else
        printf("element not found");
}