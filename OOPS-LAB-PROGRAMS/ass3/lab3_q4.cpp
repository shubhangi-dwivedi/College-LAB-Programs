//4. WOOP in C++ to store and print record of a student.

/*
NAME : SHUBHANGI DWIVEDI
ROLL NO. :1913122
DATE OF CREATION : 20/01/21
*/


#include<iostream>
#include<stdio.h>

using namespace std;

class student
{
    private:
        char s_name[50],course[50],sem[50];
        int roll_no;
    public:
        void read_data()
        {
            cout<<"Enter student's roll no. : ";
            cin>>roll_no;
            cout<<"Enter student's name : ";
            fflush(stdin);
            gets(s_name);
            cout<<"Enter course name : ";
            fflush(stdin);
            gets(course);
            cout<<"Enter semester : ";
            fflush(stdin);
            gets(sem);
        }

        void display_data()
        {
            cout<<"\nStudent's roll no. : "<<roll_no;
            cout<<"\nStudent's name : ";
            puts(s_name);
            cout<<"Course name : ";
            puts(course);
            cout<<"Semester student is in : ";
            puts(sem);
        }

};

int main()
{
    student stud;
    stud.read_data();
    stud.display_data();

    return 0;
}
