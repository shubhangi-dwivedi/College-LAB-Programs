//Assignment : 7
//6. WOOP for implementing CONST Object, CONST Member Function, CONST Arguments.

/*
NAME : SHUBHANGI DWIVEDI
ROLL NO. 1913122 
DATE : 25/02/21
*/

#include<iostream>
#include<cstring>

using namespace std;

const int xy=1; 

class Person //Global class
{
	private:
		char name[50];
		char adr[50];

	public:
		Person() //default cons.
		{
		}

		Person(char const y[],char const z[]) //parametrized cons.
		{
			strcpy(name,y);
			strcpy(adr,z);
		}

		void getdata()
		{
			cout<<"Enter Name : ";
			gets(name);
			cout<<"Enter Address(hno,street,city):";
			gets(adr);
		}

		void show1()
		{
			cout<<endl<<"*****Show1*****\nDisplaying Name and Address(Hno,street,city)\n"<<"Name: "<<name<<endl<<"Address: "<<adr<<endl<<"Const value: "<<xy<<endl; 
		}

		void show() const
		{
			cout<<endl<<"*****Show*****\nDisplaying Name and Address(Hno,street,city)\n"<<"Name: "<<name<<endl<<"Adress: "<<adr<<endl<<"Const value: "<<xy<<endl;
		}
};

int main()
{
	//p
	Person p;
	p.getdata();
	p.show1();
	
	//p1
	char name[50], adr[50];
	cout<<"\nEnter Name : ";
	gets(name);
	cout<<"\nEnter Address (Hno,street,city) (resp.) : ";
	gets(adr);
	const Person p1(name,adr);
	p1.show();
}
