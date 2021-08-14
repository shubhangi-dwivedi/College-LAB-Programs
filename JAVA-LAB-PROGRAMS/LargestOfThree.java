package collegeProg;

import java.util.Scanner;

public class LargestOfThree {

	public static void main()
	{
		Scanner sc= new Scanner(System.in);
		double a,b,c;
		
		System.out.print("Enter value of a : ");
		a=sc.nextDouble();
		System.out.print("Enter value of b : ");
		b=sc.nextDouble();
		System.out.print("Enter value of c : ");
		c=sc.nextDouble();
		
		if(a>b)
		{
			if(a>c)
				System.out.println("a is largest of three");
			else
				System.out.println("c is largest of three");
		}
		else
		{
			if(b>c)
				System.out.println("b is largest of three");
			else
				System.out.println("c is largest of three");
		}
	}
	
}


/*Enter value of a : 77
Enter value of b : 11
Enter value of c : 444
c is largest of three*/