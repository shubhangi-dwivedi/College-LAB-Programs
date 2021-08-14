//Creating sets

#include<stdio.h>

void simple_union(int p[],int i, int j)
{
    p[i]=j;
}

int simple_find(int p[],int i)
{
    while(p[i]>0)
        i=p[i];

    return i;
}

int main()
{
    int p[50],n,s,ele,set_no,ele_no,i,j,root,find;

    printf("Enter the no. of elements in the set : ");
    scanf("%d",&n);

    //method 1
    for(i=1;i<=n;i++)
        p[i]=-1;

    //method 2
    /*
    printf("Enter the no. of sets : ");
    scanf("%d",&s);

    for(i=1;i<=s;i++)
    {
        printf("Enter totals elements in a given set : ");
        scanf("%d",&ele_no);

        for(j=1;j<=ele_no;j++)
        {
            printf("Enter element no. %d : ", j);
            scanf("%d",&ele);

            if(j==1)
            {
                p[ele]=-1;
                root=ele;
            }
            else
                p[ele]=root;
        }
    }
    */

    printf("The elements stored in parent array as :\n");

    for(i=1;i<=n;i++)
        printf("p[%d]\t",i);

    printf("\n");

    for(i=1;i<=n;i++)
        printf("%d\t",p[i]);

    printf("\nEnter the set nos. whose union you want to perform : ");
    scanf("%d %d",&i,&j);
    simple_union(p,i,j);

    printf("Result after UNION : \n");
    printf("The elements are stored in parent array as : \n");
    for(i=1;i<=n;i++)
        printf("p[%d]\t",i);

    printf("\n");
    
    for(i=1;i<=n;i++)
        printf("%d\t",p[i]);

    printf("\nEnter the value whose parent you have to find: ");
    scanf("%d",&i);
    find=simple_find(p,i);
    printf("The parent of %d is %d",i,find);

    return 0;
}