//Assignment : 8 (INHERITANCE)
//4. WOOP for Multilevel Inheritance (protected / Private) over Student -> Test ->Result class.

/*
NAME : SHUBHANGI DWIVEDI
ROLL NO. 1913122 
DATE : 10/03/21
*/

#include<iostream>
using namespace std;

class Student
{
    private:
		char name[30];

    protected:
        int rollno;

    public:
        void get() 
        {
            cout<<"\nenter name of student : ";
			gets(name);
			cout<<"\nenter roll no. : ";
			cin>>rollno;
        }
        void show() 
        {
            cout<<"\nName Of Student : "<<name;
			cout<<"\nRollNo  Of Student : "<<rollno;
        }
};

class Test : private Student
{
    protected :
        float m1,m2,m3,m4,m5;
        //int sub1,sub2;

    public :
        void getm()
        {
            get();
            cout<<"\nEnter marks of all five subjects (resp.) : ";
			cin>>m1>>m2>>m3>>m4>>m5;
        }

        void print()
        {
            show();
            cout<<"\nmarks :";
			cout<<"\n 1st subject : "<<m1;
			cout<<"\n 2nd subject : "<<m2;
			cout<<"\n 3rd subject : "<<m3;
			cout<<"\n 4th subject : "<<m4;
			cout<<"\n 5th subject : "<<m5;
        }
};

class Result : protected Test
{
    private:
        float total;
		float per;
    public:
        void Cal()
        {
            getm();
            total=m1+m2+m3+m4+m5;
			per=((total/500)*100);
        }

        void Display()
        {
            print();
			
			cout<<"\nTotal: "<<total;
			cout<<"\nPercentage : "<<per;
        }
};

int main()
{
    Result s1;
    s1.Cal();
    s1.Display();
    return 0;
}