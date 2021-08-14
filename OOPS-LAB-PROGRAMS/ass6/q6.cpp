//Assignment 6 : (Friend Functions and Member Function)
//6. WOOP over Matrix class to add two Matrix.

/*
NAME : SHUBHANGI DWIVEDI
ROLL NO. 1913122 
DATE : 17/02/21
*/

#include<iostream>
#include<cstring>

using namespace std;

class MATRIX
{
		int M[5][5];
		int m,n;
	public:
		void read(int p)
		{
			cout<<"\nenter row and column of "<<p<<" matrix: ";
			cin>>m>>n;
			
			cout<<"\nenter elements of "<<p<<" matrix : \n";
			for(int i=1;i<=m;i++)
				for(int j=1;j<=n;j++)
					cin>>M[i][j];
		}
		void show()
		{
			cout<<endl<<" matrix : \n";
			for(int i=1;i<=m;i++)
			{
				for(int j=1;j<=n;j++)
					cout<<M[i][j]<<" ";
				cout<<endl;
			}
		}
		MATRIX add(MATRIX r)
		{
			MATRIX temp;
			temp.m=m;
			temp.n=n;
			
			for(int i=1;i<=m;i++)
				for(int j=1;j<=n;j++)
					temp.M[i][j]=M[i][j]+r.M[i][j];
		
			return temp;
		}
		void add(MATRIX a,MATRIX b)
		{
			m=a.m;
			n=a.n;
			
			for(int i=1;i<=m;i++)
				for(int j=1;j<=n;j++)
					M[i][j]=a.M[i][j]+b.M[i][j];	
		}

};
int main()
{
	MATRIX a,b,p,q;
	
	cout<<"\nreading 1 matrix : ";
	a.read(1);
	cout<<"\nreading 2 matrix : ";
	b.read(2);
	
	cout<<"\nprinting 1 matrix : ";
	a.show();
	cout<<"\nprinting 2 matrix : ";
	b.show();
	
	cout<<"\nadding two matrix(1 way) : ";
	p=a.add(b);
	p.show();
	
	cout<<"\nadding two matrix(2 way) : ";
	q.add(a,b);
	q.show();
	
	return 0;
}