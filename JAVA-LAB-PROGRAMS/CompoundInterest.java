package collegeProg;

import java.util.Scanner;

public class CompoundInterest {
	public static void main(String args[])
	{
		double p,r,ci,amt,n,t;
		
		Scanner sc= new Scanner(System.in);
		
		System.out.print("Enter principal : ");
		p=sc.nextDouble();
		System.out.print("Enter rate : ");
		r=sc.nextDouble();
		System.out.print("Enter no. of years : ");
		t=sc.nextDouble();
		System.out.print("Enter no. times interest compounded : ");
		n=sc.nextDouble();
		
		amt=p* Math.pow(1+(r/n), t*n);
		ci=amt-p;
		System.out.println("The calculated compound interest is = "+ ci);		

		System.out.println("Compound Interest is = "+ci);
	}
}


/*
Enter principal : 50000
Enter rate : 0.15
Enter the no. of years : 2
Enter no. times interest compounded : 12
The calculated compound interest is = 17367.552520717494
Compound Interest is = 17367.552520717494
 */