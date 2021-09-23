package collegeProg;

import java.util.*;

public class ExceptionHandling {
	
	public static int solution(int x, int y) {
		Scanner sc=new Scanner(System.in);
		int ans=0;
		int a[]= {0,1,2,3,4};
		
		while(ans==0) {
			try {
				ans=a[x]/y; //may throw exception
				return ans;
			}
			//handling exception
			catch(ArithmeticException e) {
				System.out.println(e);
				System.out.println("Enter value of x, y : ");
				x=sc.nextInt();
				y=sc.nextInt();
			}
			catch(ArrayIndexOutOfBoundsException e) {
				System.out.println(e);
				System.out.println("Enter valid index x, y: ");
				x=sc.nextInt();
				y=sc.nextInt();
			}
		}
		return ans;
	}
	
	public static void main(String args[]) {
		System.out.println("Result is : "+ solution(0,0));
	}
}

/*java.lang.ArithmeticException: / by zero
Enter value of x, y : 
2
0
java.lang.ArithmeticException: / by zero
Enter value of x, y : 
4
2
Result is : 2*/
