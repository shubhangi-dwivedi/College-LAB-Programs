//Assignment : 12
//PART: A (IOS and Manipulators)
//2.WOOP over Student class for storing record and printing result of student using IOS function and Manipulators

/*
NAME : SHUBHANGI DWIVEDI
ROLL NO. 1913122 
DATE : 15/04/21
*/

#include<iostream>
#include<iomanip>

using namespace std;

class student
{ 
	int roll;
	char name[20],course[20];
	float m1,m2,m3,m4;
	
 	public:
 		
 			void read()
 			{
 		 		cout<<"\nEnter Roll no. of student= ";
 		 		cin>>roll;
 		 		cout<<"\nEnter the Name of student= ";
 		 		cin.ignore();
				cin.getline(name,20);
				cout<<"\nEnter Course of Student= ";
 		 		cin.getline(course,20);
 		 		cout<<"\nEnter Marks of four subjects=  ";
       			cin>>m1>>m2>>m3>>m4;
			}
						
 		 	void print()
 		 	{
 		 	
 		 	  	cout<<"\n\nName : ";
				cout.width(10);
 		 		cout.fill(' ');
				cout<<name;
 		 	  	
 		 	  	cout.width(15);
 		 		cout.fill(' ');
 		 	  	cout<<roll;
 		 	
 		 	  	cout<<"\nCourse : "<<setw(10)<<setfill(' ')<<course;
 		 	  	cout<<"\nMarks : ";
 		 	  	cout<<setprecision(2)<<m1<<"\t"<<m2<<"\t"<<m3<<"\t"<<m4;
			}
	
};
int main()
{
	student s;
	
	s.read();
	s.print();
	
	return 0;
}
