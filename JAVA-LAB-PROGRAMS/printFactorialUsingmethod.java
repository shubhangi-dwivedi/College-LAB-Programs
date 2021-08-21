package collegeProg;

import java.util.Scanner;

public class printFactorialUsingmethod {

	static int nfactorial(int n) {
			if(n<1)
				return 1;
		return n*nfactorial(n-1);
	}
	
	public static void main(String args[]) {
		Scanner sc=new Scanner(System.in);
		System.out.print("enter a number : ");
		int n=sc.nextInt();
		
		int x=nfactorial(n);
		
		System.out.print(x);
	}
	
}

/*enter a number : 5
120*/