package collegeProg;

import java.util.Scanner;

public class PrintSumOfDigitsInANumber {
	public static void main(String[] args) {
			Scanner sc = new Scanner(System.in);

			System.out.print("Enter any number = ");
			int n=sc.nextInt();
			int rem=0,sum=0;
			
			for(;n>0;n/=10) {
				rem=n%10;
				sum+=rem;
			}
			
			System.out.println("Sum of digits is = "+sum);
	}
	
}

/*Enter any number = 4587
Sum of digits is = 24*/