//Assignment 6 : (Friend Functions and Member Function)
/*
4. WOOP program on Time class (HH,MM,SS) to
(i) Store (get time), (ii) Show time
(iii) Add two times , (iv) Difference between time
*/

/*
NAME : SHUBHANGI DWIVEDI
ROLL NO. 1913122 
DATE : 24/02/21
*/

#include<iostream>
#include<string.h>

using namespace std;

class Time
{
	int DD,HH,MM,SS;
	public:
		void set()
		{
			cout<<"read time : ";
			cin>>HH>>MM>>SS;
		}	
		void show()
		{
			cout<<"\nTime :"<<DD<<"-DD "<<HH<<"-HH "<<MM<<"-MM "<<SS<<"-SS"<<endl;
		}
		friend Time add(Time x,Time y)
		{
			Time temp;
			temp.DD=temp.HH=temp.MM=temp.SS=0;
			
			temp.SS=x.SS+y.SS;
			if(temp.SS>=60)
			{
				int p;
				p=temp.SS/60;
				temp.SS=temp.SS%60;
				temp.MM=temp.MM+p;
			}
			
			temp.MM=temp.MM+x.MM+y.MM;
			if(temp.MM>=60)
			{
				int p;
				p=temp.MM/60;
				temp.MM=temp.MM%60;
				temp.HH=temp.HH+p;
			}
			
			temp.HH=temp.HH+x.HH+y.HH;
			if(temp.HH>=24)
			{
				int p;
				p=temp.HH/24;
				temp.HH=temp.HH%24;
				temp.DD=temp.DD+p;
			}
			
			return temp;
		}
		friend Time sub(Time x,Time y);
	
};
Time sub(Time x,Time y)
{
	Time temp;
	
	if(x.HH>y.HH)
	{
		if(x.SS<y.SS)
		{
			x.SS=x.SS+60;
			x.MM=x.MM-1;
			temp.SS=x.SS-y.SS;
		}
		else
		{
			temp.SS=x.SS-y.SS;
		}
		
		if(x.MM<y.MM)
		{
			x.MM=x.MM+60;
			x.HH=x.HH-1;
			temp.MM=x.MM-y.MM;
		}
		else
		{
			temp.MM=x.MM-y.MM;
		}
		
		temp.HH=x.HH-y.HH;
	}
	else
	{
		if(x.SS<y.SS)
		{
			x.SS=x.SS+60;
			x.MM=x.MM-1;
			temp.SS=y.SS-x.SS;
		}
		else
		{
			temp.SS=y.SS-x.SS;
		}
		
		if(x.MM<y.MM)
		{
			x.MM=x.MM+60;
			x.HH=x.HH-1;
			temp.MM=y.MM-x.MM;
		}
		else
		{
			temp.MM=y.MM-x.MM;
		}
		
		temp.HH=y.HH-x.HH;
	}
	
	return temp;
}
int main()
{
	Time t1,t2,t3,t4;
	
	
	cout<<"\nread time t1(HH/MM/SS) : ";
	t1.set();
	
	cout<<"\nread time t2(HH/MM/SS) : ";
	t2.set();
	
	cout<<"\ndisplay t1 ";
	t1.show();
	
	cout<<"\ndisplay t2 ";
	t2.show();
	
	cout<<"\nadding two time : ";
	t3=add(t1,t2);
	t3.show();
	
	cout<<"\nsubtracting two time : ";
	t4=sub(t1,t2);
	t4.show();
	
	return 0;
}

