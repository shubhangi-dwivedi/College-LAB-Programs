package collegeProg;

import java.util.Scanner;

public class PrintDiamondPattern {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		System.out.print("Enter any number = ");
		int n=sc.nextInt();
		
		for(int i=1;i<=n;i++) {
			for(int j=1;j<=n-i;j++)
				System.out.print(" ");
			
			for(int j=1;j<=i;j++)
				System.out.print(j+ " ");
			
			System.out.println();
			
		}
		
		for(int i=n-1;i>=1;i--) {
			for(int j=1;j<=n-i;j++)
				System.out.print(" ");
			
			for(int j=1;j<=i;j++)
				System.out.print(j+ " ");
			
			System.out.println();
		}
		
	}
}


/*
Enter any number = 4
   1 
  1 2 
 1 2 3 
1 2 3 4 
 1 2 3 
  1 2 
   1 

  */