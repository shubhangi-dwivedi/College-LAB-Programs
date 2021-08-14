//Print prime numbers from 1 to 100

package collegeProg;

import java.util.Scanner;

public class NoIsPrimeOrNot {
	
	public static void main(String[] args) {
		
		int i=1,count,x;
		
		System.out.println("Prime nos. from in 1 to 100 are :-");
		
		while(i<=100) {
			count=0;
			x=1;
			while(x<=i)
			{
				if(i%x==0)
					count++;
				x++;
			}
			
			if(count==2)
				System.out.println(i);
			i++;
		}
	}

}

/*Prime nos. from in 1 to 100 are :-
2
3
5
7
11
13
17
19
23
29
31
37
41
43
47
53
59
61
67
71
73
79
83
89
97
*/