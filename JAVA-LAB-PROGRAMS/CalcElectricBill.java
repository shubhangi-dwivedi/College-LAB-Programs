package collegeProg;

import java.util.Scanner;

public class CalcElectricBill {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		System.out.print("Enter the units used = ");
		int units=sc.nextInt();
		int total=150,n1=0,n2=0,n3=0;
		
		if(units>=1000)
		{
			n1=units-1000;
			units-=n1;
			n1*=8;
		}
		
		if(units>500 && units<1000)
		{
			n2=units-500;
			units-=n2;
			n2*=6;
		}
		
		if(units>200 && units<=500)
		{
			n3=units-200;
			units-=n3;
			n3*=4;
		}
		
		total+=n1+n2+n3;
		System.out.println("Total bill is = "+total);
	}
}


/*
Enter the units used = 503
Total bill is = 1368
*/