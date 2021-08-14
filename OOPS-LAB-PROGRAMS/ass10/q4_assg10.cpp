//Assignment 10 : Operator Overloading
//Part - A
//4. Overload (<<) and (>>) operator over Student Class.

/*
NAME : SHUBHANGI DWIVEDI
ROLL NO. 1913122 
DATE : 31/03/21
*/

#include<iostream>
#include<cstring>

using namespace std;

class student
{
    private:
        int rollno;
        char s_name[50];
    
    public:
        void getdata()
        {
            cout<<"Enter roll no. of student : ";
            cin>>rollno;
            cout<<"Enter the name of student : ";
            cin.sync();
            gets(s_name);
        }

        void display_data()
        {
            cout<<"Roll no. of student : "<<rollno<<endl;
            cout<<"Name of student : "<<s_name<<endl;
        }

        friend void operator >>(istream &y,student &z)
        {
            cout<<"\n\n*****Overloading >>*****\n";
            cout<<"Enter roll no. of student : ";
            y>>z.rollno;
            cout<<"Enter the name of student : ";
            y>>z.s_name;
            
        }

        friend void operator <<(ostream &y,student z)
        {
            y<<"\n*****Overloading <<*****\n";
            y<<"\n-----Student details-----\n";
            y<<"Roll no. of student : ";
            y<<z.rollno<<endl;
            y<<"Name of student : ";
            y<<z.s_name<<endl;
        }
};

int main()
{
    student s1,s2;

    //s1
    s1.getdata();
    s1.display_data();

    //s2
    cin>>s2;
    cout<<s2;

    return 0; 
}

