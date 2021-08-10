#include<stdio.h>

//Method-1 (Itereative)
int bsearch(int a[10], int x,int n)
{
	int mid, ub=n,lb=1,flag=0;

	mid=(lb+ub)/2;

	while(lb<=ub)
	{
		if(a[mid]<x)
			lb=mid+1;
		else if(a[mid]==x)
		{
			flag=1;
			break;
		}
		else if(a[mid]>x)
			ub=mid-1;
		mid=(lb+ub)/2;
	}

	if(flag==1)
		return mid;
	else
	        return 0;
}

//Method-2 (using ternary operator)
int t_bsearch(int a[100], int l, int h, int x)
{
    int mid;

    if(l>h)
        return 0;

    mid=(l+h)/2;

    return (a[mid]==x ? mid : a[mid]>x ? t_bsearch(a,l,mid-1,x) : t_bsearch(a,mid+1,h,x));
}

//Method-3 (Using Recursion)
int r_bsearch(int a[100], int l, int n, int x)
{
    int mid;

    if(n==l)
    {
        if(x==a[l])
            return l;
        else
            return 0;
    }

    else
    {
        mid=(l+n)/2;

        if(x==a[mid])
            return mid;
        else 
        {
            if(x<a[mid])
                return r_bsearch(a,l,mid-1,x);
            else
                return r_bsearch(a,mid+1,n,x);
        }
    }

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

    t=t_bsearch(a,l,n,x);
    printf("\nBinary search using terenary operator result, element found at position (0 if not found) : %d ",t);

    printf("\nRecursive binary search result\n element found at position (0 if not found) : %d ",r_bsearch(a,l,n,x));

    return 0;
}