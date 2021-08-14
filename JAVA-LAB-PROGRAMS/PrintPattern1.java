package collegeProg;

import java.util.Scanner;

public class PrintPattern1 {
	public static void main(String args[])
	{
		
		Scanner sc= new Scanner(System.in);
		
		System.out.print("Enter a no. : ");
		int n= sc.nextInt();
		
		for(int i=1;i<=n;i++)
		{	for(int j=1;j<=i;j++)
				System.out.print(j);
		System.out.println();
		}
	}
}


/*Enter a no. : 7
1
12
123
1234
12345
123456
1234567*/