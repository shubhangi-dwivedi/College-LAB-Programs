//Assignment: 0
//Implementing operations in Complex class using friend function and constructor.

/*
NAME : SHUBHANGI DWIVEDI
ROLL NO. 1913122
*/

#include<iostream>

using namespace std;

//complex number

class Complex
{
	private:
		float real;
		float img;
	public:
		friend Complex set();
		
		friend Complex set(float ,float );

		friend void show(Complex );

		Complex add(Complex z)
		{
			Complex temp;
			
			temp.real= real + z.real;
			temp.img= img + z.img;
			
			return temp;
		}

		friend Complex mult(Complex ,Complex );
};

Complex set()
{
	Complex temp;
			
	temp.img=0;
	temp.real=0;
			
	return temp;
}

Complex set(float a,float b)
{
	Complex temp;
		
	temp.real=a;
	temp.img=b;
			
	return temp;
}

 void show(Complex x)
		{
			 
			cout<<"\ncomple number- "<<x.real<<" :real and "<<x.img<<" :img"<<endl;
			cout<<"c="<<x.real<<"+i"<<x.img<<endl;
		}

Complex mult(Complex x,Complex y)
{
	Complex temp;
			
	temp.real=(x.real*y.real) - (x.img*y.img);
	temp.img=(x.real*y.img) + (x.img*y.real);
			
	return temp;
}

int main()
{
	Complex c1,c2,c3,c4;
	
	cout<<"\nread 1 complex: ";
	cout<<"\nenter complex number : ";
	float p,q;
	cin>>p>>q;
	c1=set(p,q);
	show(c1);
	
	cout<<"\nread 2 complex: ";
	cout<<"\nenter complex number : ";
	float a,b;
	cin>>a>>b;
	c2=set(a,b);
	show(c2);
	
	int ch;

	do
	{
		cout<<"Enter your chhoice : \n1.Add 2 complex no.\n2.Multiply two complex no.\n3.EXIT\n-> ";
		cin>>ch;

		switch(ch)
		{
			case 1 :
				cout<<"Adding two complex no. : ";
				c3=c1.add(c2);
				show(c3);
				break;
			case 2:
				cout<<"Multiplying two complex no. : ";
				c4=mult(c1,c2);
				show(c4);
				break;
			case 3: 
				cout<<"EXIT\n";
				break;
			default :
				cout<<"Wrong choice\n";
		}

	} while (ch!=3);
	

	return 0;
}