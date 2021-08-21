package collegeProg;

import java.util.Scanner;

public class SumOf2DMatrix {
	public static void main(String args[]) {
	Scanner sc= new Scanner(System.in);	
	
	System.out.print("Enter the no. of rows matrix 1: ");
	int r1= sc.nextInt();
	System.out.print("Enter no. of columns matrix 1: ");
	int c1= sc.nextInt();
	int arr1[][]= new int[r1][c1];
	
	System.out.print("Enter the no. of rows matrix 2: ");
	int r2= sc.nextInt();
	System.out.print("Enter no. of columns matrix 2: ");
	int c2= sc.nextInt();
	int arr2[][]= new int[r2][c2];
	
	if(r1==r2 && c1==c2)
	{
	int sum=0;
	System.out.println("Enter elements matrix 1: ");
	for(int i=0;i<r1;i++)
		for(int j=0;j<c1;j++)
		{
			arr1[i][j]=sc.nextInt();
			sum+=arr1[i][j];
		}
	
	System.out.println("Enter elements matrix 1: ");
	for(int i=0;i<r1;i++)
		for(int j=0;j<c1;j++)
		{
			arr2[i][j]=sc.nextInt();
			sum+=arr2[i][j];
		}
	
	
	System.out.print("Sum of elements im the matrix is : " +sum);
	}
	
	else {
		System.out.println("Matrices not compatible for addition");
	}
	}
}
/*Enter the no. of rows matrix 1: 2
Enter no. of columns matrix 1: 2
Enter the no. of rows matrix 2: 2
Enter no. of columns matrix 2: 2
Enter elements matrix 1: 
1 2
3 4
Enter elements matrix 1: 
5 3

8 9
Sum of elements im the matrix is : 35*/