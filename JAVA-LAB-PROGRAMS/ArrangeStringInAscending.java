package collegeProg;

import java.util.*;

public class ArrangeStringInAscending {

		public static void main(String[] args) {
			
			Scanner sc=new Scanner(System.in);
			System.out.print("enter no. of elements in array : ");
			int n=sc.nextInt();
			
			String[] arr=new String[n];
			
			System.out.print("enter the array elements : ");
			
			for(int i=0;i<n;i++)
				arr[i]=sc.next();

			for(int i=0;i<n-1;i++)
				for(int j=i+1;j<n;j++)
					if(arr[j].compareTo(arr[i])<0)
					{
						String temp=arr[i];
						arr[i]=arr[j];
						arr[j]=temp;
					}
					
			System.out.println("sorted array elements");
			int i=0;
			do
			{
				System.out.print(arr[i]+"\t");
				i++;
			}while(i<n);
			
		}

	}
	
/*enter no. of elements in array : 4
enter the array elements : q
f
bfgbf
sd
sorted array elements
bfgbf	f	q	sd	*/