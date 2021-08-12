#include<stdio.h>

void matrix_multi(int a1[][10], int a2[][10], int multi[][10] ,int r1,int c1, int c2)
{
    int i,j,k;

    for( i=0;i<r1;i++)
    {
        for( j=0;j<c2;j++)
        {
            multi[i][j]=0;
        }
    }

    for ( i = 0; i < r1; i++)
    {
        for ( j = 0; j < c2; j++)
        {
            for ( k = 0; k < c1; k++)
            {
                multi[i][j] += a1[i][k] * a2[k][j];
            }
        }
   }
        printf("Result of matrix multiplication is : ");
           for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
                {
                    printf("\n%d ",multi[i][j]);
                }
        }

}

int main()
{
    int a1[10][10], a2[10][10],multi[10][10], r1,r2,c1,c2,i,j;

    printf("Enter the no. of rows and columns in matrix 1 resp. : ");
    scanf("%d%d",&r1,&c1);
    printf("Enter matrix 1 elements : ");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&a1[i][j]);
        }
    }

    printf("Enter the no. of rows and columns in matrix 2 resp. : ");
    scanf("%d%d",&r2,&c2);
    printf("Enter matrix 2 elements : ");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            scanf("%d",&a2[i][j]);
        }
    }

        if(r2==c1)
        {
            matrix_multi(a1,a2,multi,r1,c1,c2);
        }
        else
        {
            printf("Can't multiply the matrices 1 & 2");
        }



    return 0;
}
