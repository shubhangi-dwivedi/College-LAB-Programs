package collegeProg;

import java.util.Scanner;

public class PrintGivenNoTable {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		System.out.print("Enter any number = ");
		int n=sc.nextInt();
		int i=1;
	
		do {
			System.out.println(n+ " X "+i+ " = " + i*n);
			i++;
		}while(i<=10);
	}
}

/*Enter any number = 33
33 X 1 = 33
33 X 2 = 66
33 X 3 = 99
33 X 4 = 132
33 X 5 = 165
33 X 6 = 198
33 X 7 = 231
33 X 8 = 264
33 X 9 = 297
33 X 10 = 330
*/