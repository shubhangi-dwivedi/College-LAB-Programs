package collegeProg;

import java.util.Scanner;

public class PrintPATTERN2 {
	
	    public static void main(String[] args) 
	    {
	        Scanner input = new Scanner(System.in);
	        
	        System.out.println("Enter the value of n = ");
	        int num = input.nextInt();
	        int k=1;
	        
	        System.out.println("The Required Pattern is = ");
	        for(int i =1; i<=num; i++)
	        {
	            for(int j = 1; j<=num-i; j++)
	                System.out.print(" ");
	            
	            for(int j=1; j<=i; j++)
	            {
	                System.out.print(k+" ");
	                k++;
	            }
	            
	            System.out.print("\n");          
	        }
	    }

}
	//Enter the value of n = 
	//4
	//The Required Pattern is = 
	//   1 
	//  2 3 
	// 4 5 6 
	//7 8 9 10

