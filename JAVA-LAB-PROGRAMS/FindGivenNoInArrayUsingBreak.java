package collegeProg;

import java.util.Scanner;

public class FindGivenNoInArrayUsingBreak {
	public static void main(String args[])
	{
		Scanner sc= new Scanner(System.in);	
		System.out.print("Enter the size of array : ");
		int n= sc.nextInt();
		
		int arr[]= new int[n];
		
		System.out.println("Enter array elements : ");
		for(int i=0;i<n;i++)
			arr[i]=sc.nextInt();
		
		System.out.print("Enter the no. you want to search : ");
		int x=sc.nextInt();
		int idx=-1,flag=0;
		for(int i=0;i<n;i++)
			if(x==arr[i]) {
				idx=i;
				flag=1;
				break;
			}
		
		if(flag==1)
			System.out.print("Element found at index "+idx);
		else
			System.out.print("Element not found");
		
		
	}
}


/*Enter the size of array : 6
Enter array elements : 
3 11 66 2 0 7
Enter the no. you want to search : 2
Element found at index 3*/