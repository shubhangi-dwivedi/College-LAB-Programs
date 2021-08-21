package collegeProg;

import java.util.*;

public class MaxElementInArray {

		public static void main(String[] args) {
		
			Scanner sc=new Scanner(System.in);
			System.out.print("enter no. of elements in array : ");
			int n=sc.nextInt();
			int[] arr=new int[n];
			System.out.print("enter the array elements : ");
			for(int i=0;i<n;i++)
			{
				arr[i]=sc.nextInt();
			}
			int max=arr[0];
			for(int i=1;i<n;i++)
			{
				if(arr[i]>max)
					max=arr[i];
			}
			System.out.print("maximum element in given array is : "+max);
		}
}


/*enter no. of elements in array : 5
enter the array elements : 545 87 24 7 0
maximum element in given array is : 545*/