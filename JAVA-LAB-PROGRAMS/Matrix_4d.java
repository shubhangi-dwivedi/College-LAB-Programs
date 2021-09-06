package collegeProg;

public class Matrix_4d {
	public static void main(String[] args) {
		int a[][][][]= {
				{
					{
						{1,2,3},
						{4,5,6},
						{7,8,9}
					},
					
					{
						{10,11, 12}
					},
					
				},
				
				{
					{
						{22,33,44,55},
						{66,77,88,99}
					}
				}
		};
		
		for(int i=0;i<a.length;i++) {
			System.out.println("Matrix block "+i);
			for(int j=0;j<a[i].length;j++) {
				System.out.println("Matrix "+j);
				for(int k=0;k<a[i][j].length;k++) {
					for(int l=0;l<a[i][j][k].length;l++) {
						System.out.print(a[i][j][k][l]+ " ");
					}
					System.out.println();
				}
			}
			System.out.println();
		}
	}
}


/*Matrix block 0
Matrix 0
1 2 3 
4 5 6 
7 8 9 
Matrix 1
10 11 12 

Matrix block 1
Matrix 0
22 33 44 55 
66 77 88 99 
*/