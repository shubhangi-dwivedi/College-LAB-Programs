//Assignment 09
//Hybrid Inheritance:
//2. WOOP hybrid Inheritance Over Student - > Test ->Result and Sports - > Result class.

/*
NAME : SHUBHANGI DWIVEDI
ROLL NO. 1913122 
DATE : 17/03/21
*/

#include<iostream>

using namespace std;

class student
{
	private:
		char name[20];

	protected:
		int rollno;

	public:
		void getdata()
		{
			cout<<"Enter name of student: ";
			gets(name);
			cout<<"Enter roll no. of student: ";
			cin>>rollno;
		}

		void putdata()
		{
			cout<<"Name of student: "<<name<<endl;
			cout<<"Roll number of student: "<<rollno<<endl;
		}
};


class test: public student
{
	protected:
		float m1,m2,m3,m4;

	public:
		void getmarks()
		{
			cout<<"Enter marks of four subjects (out of 100 resp.): "<<endl;
			cin>>m1>>m2>>m3>>m4;
		}

		void putmarks()
		{
			cout<<"Marks of subject 1: "<<m1<<endl;
			cout<<"Marks of subject 2: "<<m2<<endl;
			cout<<"Marks of subject 3: "<<m3<<endl;
			cout<<"Marks of subject 4: "<<m4<<endl;
		}
};


class sports
{
	protected:
		int sportScore;
		int noofdays;		//40hrs min.
	public:
		void get_sports()
		{
			cout<<"No. of days: ";
			cin>>noofdays;
			cout<<"................"<<endl;
			if(noofdays >30)
				sportScore=10;
			else if(noofdays >10)
				sportScore=5;
			else
				sportScore=0;
		}
		
		void show_sports()
		{
			cout<<"Sports grade of student: ";
			cout<<sportScore<<endl;
		}
};


class result: public test, public sports
{
	protected:
		float total,per;
	public:
		void cal()
		{
		total= m1 + m2 + m3 + m4 + sportScore;
		per=((total/400)*100);
		}
		void display()
		{
		putdata();
		putmarks();
		show_sports();
		cout<<"Total: "<<total<<endl;
		cout<<"Percentage: "<<per<<endl;
		}
};


int main()
{
result r;
r.getdata();
r.getmarks();
r.get_sports();
r.cal();
r.display();
return 0;
}
