package collegeProg;

import java.util.*;

public class PrintCharArrayUsingForEachLopp {
	public static void main(String args[]) {
		Scanner sc=new Scanner(System.in);
		
		System.out.println("Elements in character array are : ");
		char arr[]= {'s','h','u','b','h','a','n','g','i'};
		
		for(char i : arr)
			System.out.println(i);
	}
}

/*Elements in character array are : 
s
h
u
b
h
a
n
g
i
*/