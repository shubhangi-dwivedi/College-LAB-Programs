package collegeProg;

import java.util.*;

public class PrintBinaryPattern {

	   
	    public static void main(String[] args)
	    {
	 
	    	Scanner sc = new Scanner(System.in);
	    	System.out.print("Enter the height of pattern you want to print : ");
	    	int h=sc.nextInt();
	    	int temp=1;
	    	for(int i=1;i<=h;i++)
	    	{
	    		for(int j=1;j<=i;j++)
	    		{
	    			if(temp==1)
	    				temp=0;
	    			else
	    				temp=1;
	    		  
	    			System.out.print(temp);
	    		}
	    		System.out.println();
	    	}
	    }
	}

	/*OUTPUT
	Enter the height of pattern : 
	5
	0
	10
	101
	0101
	01010
	*/
