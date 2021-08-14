//Assignment 7

/*
5. WOOP for Student / Account Class (Array of Object) with Any two
constructors and Destructor functions with following operations;
 storing
 printing records for Array of Object
 Search on Student Name / Account Holder Name
 Sort on Roll No. / Account No.
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
		student () 
        {
            strcpy(name,"\0");
			roll=0;
			strcpy(course,"\0");
		    age=0;
        }

		student(char const *n, char const *c, int y)
		{
			roll_count++;
			roll = roll_count;
			strcpy(name, n);
			strcpy(course, c);
			age = y;
            cout<<"Roll no. of the student is : "<<roll<<endl;
		}

		void show();
		
		~student()
		{
		}

		friend void search(student s1[],char const *z, int n)
		{
			int count = 0;
			for(int i=0;i<n;i++)
			{
				if((strcmp(s1[i].name, z)== 0))
		 		{
					cout<<" Found";
					s1[i].show();
					count++;
					break;
			    }
			}
			if(count == 0)
			cout<<"\n not found";
		}
		
		friend void sort(student s1[], int n)
		{
			for(int i=0;i<n;i++)
			{
				for(int j=0;j<n;j++){
					if(s1[i].roll < s1[j].roll)
					{
						student temp = s1[i];
						s1[i] = s1[j];
						s1[j] = temp;
					}
				}
			}
			
			cout<<"\n After sorting :";
		}
};

char student :: department[50] = "Computer Science & Information Technology";
int student :: roll_count = 0;

void student :: show()
{

	cout<<"\n **Details* ";
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
		cout<<"\n 1. Search by name \n 2. sort by roll_no \n 3. Show data \n 4. Exit ";
		
		cout<<"\n Enter your choice : ";
		cin>>choice;
			
		switch(choice)
		{
			case 1 :
				cout<<"\n Enter the name you want to search : ";
				cin>>m;
				search(s,m,n);					
				break;
				
			case 2 :
				sort(s,n);
				for(int i=0;i<n;i++)
					s[i].show();
				break;
	
			case 3 :
				for(int i=0;i<n;i++)
					s[i].show();
				break;
	
			case 4:
				cout<<"\n Exiting";
				break;
			default :
				cout<<"\n Enter a valid choice ";
				break;		
		}

	}while(choice != 4);

	return 0;
}