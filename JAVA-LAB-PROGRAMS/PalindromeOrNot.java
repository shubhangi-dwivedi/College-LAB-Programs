package collegeProg;

import java.util.Scanner;

public class PalindromeOrNot {
	
		public static void main(String[] args) {
				Scanner sc = new Scanner(System.in);

				System.out.print("Enter any number = ");
				int n=sc.nextInt();
				int rem=0,new_n=0;
				int x=n;
				
				for(;n>0;n/=10) {
					rem=n%10;
					new_n=new_n*10+rem;
				}
				
				System.out.println("Reverse of given no. is = "+new_n);
				
				if(new_n==x)
					System.out.println("It is a palindrome");
				else
					System.out.println("Not a palindrome");
		}
}

/*Enter any number = 23132
Reverse of given no. is = 23132
It is a palindrome
*/