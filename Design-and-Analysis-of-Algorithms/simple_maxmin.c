//MAX-MIN elements

#include<stdio.h>
#include<limits.h>

#define size 100

void MaxMin(int a[], int n, int *max, int *min)
{
    int i;

    *min=INT_MAX;
    *max=INT_MIN;

    for(i=1;i<=n;i++)
    {
        if(a[i] < *min)
            *min=a[i];

        if(a[i] > *max)
            *max=a[i];
    }
}

int main()
{
    int n, a[size],i,min,max;

    printf("Enter no. of elements : ");
    scanf("%d",&n);

    printf("Enter the elements : ");
    for(i=1;i<=n;i++)
        scanf("%d",&a[i]);

    MaxMin(a,n,&max,&min);

    printf("The MAX element in the array is : %d\n",max);
    printf("The MIN element in the array is : %d\n",min);

    return 0;
}