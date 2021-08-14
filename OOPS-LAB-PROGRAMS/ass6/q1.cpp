//Assignment 6 : (Friend Functions and Member Function)
//1. WOOP for print sum of private Data Members of two different classes.

/*
NAME : SHUBHANGI DWIVEDI
ROLL NO. 1913122 
DATE : 18/02/21
*/

#include<iostream>
#include<cstring>

using namespace std;

//using friend function in two different classes
class Num2;
class Num1
{
	private:
		int a;
	public:
		void get1()
		{
			cout<<"\nEnter number of class 1 :";
			cin>>a;
		}
		void show()
		{
			cout<<"\nNum1::a="<<a;
		}
		friend int sum(Num1 ,Num2 );
	
};

class Num2
{
	private:
		int b;
	public:
		void get2()
		{
			cout<<"\nEnter number of class 2 :";
			cin>>b;
		}
		void show()
		{
			cout<<"\nNum2::b="<<b;
		}
		 friend int sum(Num1 ,Num2 );
};

int sum(Num1 x,Num2 y)
{
	int sum;
	
	sum=x.a+y.b;
	
	return sum;
}

int main()
{
	Num1 n1;
	Num2 n2;
	
	n1.get1();
	n2.get2();
	
	n1.show();
	n2.show();
	
	cout<<"\n\n\t\t\t\t\tCalculating sum of two number ";
	int p;
	p=sum(n1,n2);
	cout<<"\n sum of two number : "<<p;
	
	return 0;
}