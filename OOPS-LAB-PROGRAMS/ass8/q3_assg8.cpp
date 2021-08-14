//Assginment : 8 (Multilevel Inheritance)
//3. WOOP for Multilevel Inheritance (publicly) over Student -> Test -> Result class.

/*
NAME : SHUBHANGI DWIVEDI
ROLL NO. 1913122 
DATE : 04/03/21
*/

#include<iostream>

using namespace std;

//multilevel inheritance
class student
{
	private:
		char name[30];
	protected:
		char rollNo[10];
	public:
		void readData()
		{
			cout<<"\nenter name of student : ";
			gets(name);
			cout<<"\nenter roll no. : ";
			gets(rollNo);
		}
		void printData()
		{
			cout<<"\nName Of Student : "<<name;
			cout<<"\nRollNo  Of Student : "<<rollNo;
		}
};

class test:public student
{
	protected:
		float m1,m2,m3,m4,m5;
	public:
		void readMarks()
		{
			cout<<"\nEnter marks of all five subjects : ";
			cin>>m1>>m2>>m3>>m4>>m5;
		}
		void printMarks()
		{
			cout<<"\nmarks :";
			cout<<"\n 1st subject : "<<m1;
			cout<<"\n 2nd subject : "<<m2;
			cout<<"\n 3rd subject : "<<m3;
			cout<<"\n 4th subject : "<<m4;
			cout<<"\n 5th subject : "<<m5;
		}
};
class result:public test
{
	private:
		float total;
		float per;
	public:
		void calc()
		{
			total=m1+m2+m3+m4+m5;
			per=((total/500)*100);
		}
		void display()
		{
			printData();
			printMarks();
			
			cout<<"\nTotal: "<<total;
			cout<<"\nPercentage : "<<per;
		}
};

int main()
{
	result s1;
	s1.readData();
	s1.readMarks();
	
	s1.calc();
	s1.display();
	
	return 0;
}