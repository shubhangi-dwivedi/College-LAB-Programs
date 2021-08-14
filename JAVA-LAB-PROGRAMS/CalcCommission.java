package collegeProg;

import java.util.*;

public class CalcCommission {
	public static void main(String arg[])
	{
		Scanner sc=new Scanner(System.in);
		System.out.print("Enter sales : ");
		int sales=sc.nextInt();
		double comsn=0;
	
		if(sales>50000)
			comsn=15.0/100.0*sales;
		else if(sales>20000)
			comsn=10.0/100.0*sales;
		else if(sales>10000)
			comsn=5.0/100.0*sales;
	
		System.out.println("Commission is = "+comsn);
	}
}

/*
O/P: 
Enter sales : 770000
Commission is = 115500.0
 */