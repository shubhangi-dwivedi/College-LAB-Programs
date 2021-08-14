//Assignment 7

/*
1. WOOP with student class with at least one or more Static Data members
and one or more Static Member Function and implement storage, Printing
students records and also count no. of objects created of student class.
*/

/*
NAME : SHUBHANGI DWIVEDI
ROLL NO. 1913122 
DATE : 25/02/21
*/

#include<iostream>
#include<string.h>

using namespace std;

class student
{
	private :
		int roll;
		static int roll_count;
		char course[10];
		char name[10];
		int age;
		static char department[50];

	public :

        static int obj_count;

		student() 
        {
            strcpy(name,"\0");
			roll=0;
			strcpy(course,"\0");
		    age=0;
        }

		student(char const *n, char const *c, int y)
		{
            obj_count++;
			roll_count++;
			roll = roll_count;
			strcpy(name, n);
			strcpy(course, c);
			age = y;
            cout<<"Roll no. of the student is : "<<roll<<endl;
		}

        static int count()
        {
            return obj_count;
        }

		void show();

};

char student :: department[50] = "Computer Science & Information Technology";
int student :: roll_count = 0;
int student :: obj_count = 0;

void student :: show()
{

	cout<<"\n **Details** ";
	cout<<"\n Roll no\tname\tcourse\t\t\tDepartment";
	cout<<"\n "<<roll<<"\t\t"<<name<<"\t"<<course<<"\t\t"<<department<<endl;
}

int main()
{
    const int MAX =300;
	int n,choice,age1;
	char course1[10], name1[10], m[10];
		
	cout<<"\n Enter the number of records  : ";
	cin>>n;
		
	student s[MAX];
		
	for(int i=0;i<n;i++)
	{
	
		cout<<"\n Enter name : ";
		cin>>name1;
		
		cout<<"\n Enter course : ";
		cin>>course1;
		
		cout<<"\n Enter the age : ";
		cin>>age1;
		s[i] = student(name1, course1, age1);
		
	}
	do
	{
		cout<<"\n You can do following : ";
		cout<<"\n 1. Show data \n 2. Count no. of data \n 3. Exit ";
		
		cout<<"\n Enter your choice : ";
		cin>>choice;
			
		switch(choice)
		{
			case 1 :
				for(int i=0;i<n;i++)
					s[i].show();
				break;

            case 2:
                cout<<"\nNo. of objects created is : "<<student::count();
			case 3:
				cout<<"\n Exiting";
				break;
			default :
				cout<<"\n Enter a valid choice (b/w 1-3)";
				break;		
		}

	}while(choice != 3);

	return 0;
}