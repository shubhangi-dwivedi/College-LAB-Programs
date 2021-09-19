package collegeProg;

import java.util.*;

interface Calculator{
	float add(float val);
	float sub(float val);
	float multi(float val);
	float div(float val);
}

class casio implements Calculator {

	float res;
	
	public casio(float res) {
		super();
		this.res = res;
	}

	@Override
	public float add(float val) {
		res+=val;
		return res;
	}
	
	@Override
	public float sub(float val) {
		res-=val;
		return res;
	}

	@Override
	public float multi(float val) {
		res*=val;
		return res;
	}

	@Override
	public float div(float val) {
		if(val==0) {
			System.out.println("Not possible to divide by 0");
			return 0;
		}
		res/=val;
		return res;
	}

};

class calc {
	public static void main(String args[]) {
		Scanner sc=new Scanner(System.in);
		Calculator c=new casio(5);
		boolean t=true;
		
		do {
			System.out.println("\n1.Add nos. ");
			System.out.println("\n2.Subtract nos. ");
			System.out.println("\n3. Multiply nos. ");
			System.out.println("\n4.Divide nos. ");
			System.out.println("\n5.Exit ");
			
			System.out.println("\nEnter your choice: ");
			int ch=sc.nextInt();
			if(ch==5) {
				System.out.println("Prog. ended");
				break;
			}
			
			System.out.println("\nEnter a number: ");
			float x=sc.nextFloat();
			
			switch(ch) {
			case 1:
				System.out.println("\nAddition = "+c.add(x));
				break;
				
			case 2:
				System.out.println("\nSubtraction = "+c.sub(x));
				break;
				
			case 3:
				System.out.println("\nMultiplication = "+c.multi(x));
				break;
				
			case 4:
				System.out.println("\nDivision = "+c.div(x));
				break;
			}
		}while(t);
	}
}

/*
1.Add nos. 

2.Subtract nos. 

3. Multiply nos. 

4.Divide nos. 

5.Exit 

Enter your choice: 
1

Enter a number: 
7

Addition = 12.0

1.Add nos. 

2.Subtract nos. 

3. Multiply nos. 

4.Divide nos. 

5.Exit 

Enter your choice: 
4

Enter a number: 
3

Division = 4.0

1.Add nos. 

2.Subtract nos. 

3. Multiply nos. 

4.Divide nos. 

5.Exit 

Enter your choice: 
5
Prog. ended*/