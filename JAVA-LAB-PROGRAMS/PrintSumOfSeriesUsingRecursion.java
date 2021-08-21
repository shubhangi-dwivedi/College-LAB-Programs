//series : 1+2+3+4+5+6+7+8+9.....

package collegeProg;

import java.util.Scanner;

public class PrintSumOfSeriesUsingRecursion {
	
	static int series_sum(int n) {
		if(n<1)
			return 0;
		
		return n+series_sum(n-1);
}
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		System.out.print("Enter any number (n) = ");
		int n=sc.nextInt();
		
		int x=series_sum(n);
		System.out.print("Sum of series (till n) = "+x);
	}

}

/*Enter any number (n) = 9
Sum of series (till n) = 45*/
