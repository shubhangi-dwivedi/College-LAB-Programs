//Assignment 6 : (Friend Functions and Member Function)
/*
3. WOOP over Complex class to
(i) Store Complex Number, (ii) Show Complex Number
(iii) Add two Complex Number, (iv) Subtract two Complex Number
(v) Multiply two Complex Number
*/

/*
NAME : SHUBHANGI DWIVEDI
ROLL NO. 1913122 
DATE : 18/02/21
*/

#include<iostream>

using namespace std;

//friend function
class Complex
{
	private:
		float real,img;
	public: 
		void set()
		{
			img=0;
			real=0;
		}
		
		void set(int a,int b)
		{
			real=a;
			img=b;
		}

		void show()
		{
			cout<<"\ncomple number- "<<real<<":real and "<<img<<":img"<<endl;
			cout<<"c="<<real<<"+i"<<img<<endl;
		}

		friend Complex sum(Complex y,Complex z)
		{
			Complex temp;
			
			temp.img=y.img+z.img;
			temp.real=y.real+z.real;
			
			return temp;
		}
		
		friend Complex sub(Complex y,Complex z);
		
		Complex mult(Complex w)
		{
			Complex temp;
			
			temp.real=(real*w.real)-(img*w.img);
			temp.img=real*w.img+img*w.real;
			
			return temp;
		}
		
		void div(Complex x,Complex y);
};

void Complex::div(Complex x,Complex y)
{
	real=(x.real*y.real+x.img*y.img)/(y.real*y.real+y.img*y.img);
	img=(x.img*y.real-x.real*y.img)/(y.real*y.real+y.img*y.img);
	
}

Complex sub(Complex y,Complex z)
{
	Complex temp;
	
	temp.img=y.img-z.img;
	temp.real=y.real-z.real;
			
	return temp;
}
	

int main()
{
	Complex c0,c1,c2,c3,c4,c5,c6;
	
	c0.set();
	
	cout<<"\nRead 1 complex: ";
	//c1.set(4.5F,5.8F);
	cout<<"\nEnter complex number : ";
	float p,q;
	cin>>p>>q;
	c1.set(p,q);
	c1.show();
	
	cout<<"\nRead 2 complex: ";
	//c2.set(3.5F,4.8F);
	cout<<"\nEnter complex number : ";
	float a,b;
	cin>>a>>b;
	c2.set(a,b);
	c2.show();
	
	cout<<"\nAdding two complex number : ";
	c3=sum(c1,c2);
	c3.show();
	
	cout<<"\nSubtracting two complex number : ";
	c4=sub(c1,c2);
	c4.show();
	
	cout<<"\nMultiplying two complex number : ";
	c5=c1.mult(c2);
	c5.show();
	
	cout<<"\nDividing two complex number : ";
	c6.div(c1,c2);
	c6.show();
	
	return 0;
}