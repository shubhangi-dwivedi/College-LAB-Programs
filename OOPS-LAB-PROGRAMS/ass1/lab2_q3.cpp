//Program to calculate sum of columns and diagonals of Matrix.

/* NAME : SHUBHANGI DWIVEDI
ROLL NO. :1913122
DATE OF CREATION : 7/01/21 */

#include<iostream>
using namespace std;

int sum_col(int a[][10],int row,int col)
{
    int col_no,result=0,sum=0;
    for(int i=0;i<col;i++)
    {
        for(int j=0;j<row;j++)
        {
            result+=a[j][i];
        }
        sum+=result;
        cout<<"\nColumn "<<i+1<<" sum is : "<<result;
        result=0;
    }
    cout<<"\nTotal columns sum is : "<<sum;

}

//for a square matrix i.e. when row=col
void sum_diagonal(int a[][10], int row, int col)
{
    int sum=0;
    for(int i =0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(i==j)
            {
                sum+=a[i][j];
            }
        }
    }
    for(int i=0;i<row;i++)
    {
        for(int j=col-1;j>=0;j--)
        {
            if(i+j==row-1)
            {
                sum+=a[i][j];
            }
        }
    }

    cout<<"\n\nThe diagonals sum is : "<<sum;
}

int main()
{
    int a[10][10],row,col;

    cout<<"Enter the no. of rows and columns of the matrix respectively : ";
    cin>>row>>col;

    cout<<"Enter the matrix elements : \n";
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>a[i][j];
        }
        cout<<"\n";
    }

    sum_col(a,row,col);
    sum_diagonal(a,row,col);
    return 0;
}
