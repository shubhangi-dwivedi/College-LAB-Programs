//assignment : 10 (operator overloading)
//7. WOOP over Vector clas for overloading *, >>, << operator on the class.

/*
NAME : SHUBHANGI DWIVEDI
ROLL NO. 1913122 
DATE : 01/04/2021
*/

using namespace std;

#include<iostream>

//*,<<,>>
const int size=3;
class Vector
{
	public:
		int v[size];

		Vector()
		{
			for(int i=0;i<size;i++)
				v[i]=0;
		}
		Vector(int *x)
		{
			for(int i=0;i<size;i++)
				v[i]=x[i];
		}
		void print()
		{
			cout<<"("<<v[0];
			for(int i=1;i<size;i++)
				cout<<","<<v[i];
			cout<<")";
		}
		friend Vector operator*(Vector b,int a);
		friend Vector operator*(int a,Vector b);
		friend istream & operator >>(istream &, Vector &);
		friend ostream & operator <<(ostream &, Vector &);
	
};

Vector operator*(int a,Vector b)
{
	Vector c;
	for(int i=0;i<size;i++)
		c.v[i]=a*b.v[i];
	return(c);
}

Vector operator*(Vector b,int a)
{
	Vector c;
	for(int i=0;i<size;i++)
		c.v[i]=b.v[i]*a;
	return(c);
}

istream & operator>>(istream &din, Vector &b)
{
	cout<<"Enter eleements : ";
	for(int i=0;i<size;i++)
		din>>b.v[i];
	return (din);
}

ostream & operator<< (ostream &dout, Vector &b)
{
	dout<<" ( "<<b.v[0];

	for (int i = 1; i < size; i++)
		dout<<" , "<<b.v[i];
	
	dout<<" ) ";

	return (dout);
	
}

int x[size]={3,4,5};

int main()
{

	Vector m;
	Vector n;
	n=x;
	cout<<"\nn=";
	//n.print();
	cout<<n<<"\n";

	Vector p,q;

	cout<<"\nenter elements of m : ";
	int a[size];
	for(int i=0;i<size;i++)
		cin>>a[i];
	m=Vector(a);
	cout<<"\nm="<<m<<"\n";
	
	p=2*m;
	q=n*2;

	cout<<"\np(2*m)="<<p<<"\n";
	cout<<"q(n*2) = "<<q<<"\n";
	cout<<"\n";
	cout<<"\nq(n*2)=";
	q.print();
	
	return 0;
}