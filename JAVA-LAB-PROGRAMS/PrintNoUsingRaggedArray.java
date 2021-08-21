package collegeProg;

import java.util.Scanner;

public class PrintNoUsingRaggedArray {
	public static void main(String args[]) {
		Scanner sc= new Scanner(System.in);	
		
		System.out.print("Enter the no. of rows matrix : ");
		int r1= sc.nextInt();
		
		int arr[][] = new int[r1][];
		for (int i = 0; i < arr.length/2+1; i++)
            arr[i] = new int[i + 1];
		
		
		for (int i = arr.length/2+1; i < arr.length; i++)
            		arr[i]=new int[arr.length-i];
		
	for (int i=0; i < arr.length; i++)
	{
		for (int j = 0; j < arr[i].length; j++)
				arr[i][j]=j+1;
	}
				
		System.out.println("Contents of 2D Jagged Array");
        for (int i = 0; i < arr.length; i++) {
            for (int j = 0; j < arr[i].length; j++)
                System.out.print(arr[i][j] + " ");
            System.out.println();
        }
	}
}


/*Enter the no. of rows matrix : 7
Contents of 2D Jagged Array
1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 
1 2 
1 
 */
