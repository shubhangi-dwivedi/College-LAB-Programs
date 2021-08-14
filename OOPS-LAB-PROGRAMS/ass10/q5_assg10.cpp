//Assignment 10 : Operator Overloading
//Part - B
//5. WOOP on String class for overloading ==, >>, << operator.

/*
NAME : SHUBHANGI DWIVEDI
ROLL NO. 1913122 
DATE : 31/03/21
*/

#include<iostream>
#include<string.h>

using namespace std;

class String
{
    private:
        char st[50];

    public:
        void getdata(char const x[])
        {
            strcpy(st,x);
        }

        void showdata()
        {
            cout<<"The string is : "<<st<<endl;
        }

        int operator ==(String x)
        {
            if(strcmp(st,x.st)==0)
                return 1;
            else
                return 0;
        }

        friend void operator >>(istream &y,String &z)
        {
            y>>z.st;
            cin.ignore();
        }

        friend void operator <<(ostream &y,String z)
        {
            y<<z.st;
        }
};

int main()
{
    String s1,s2,s3;

    s1.getdata("Object oriented");
    s2.getdata("Programming");

    s1.showdata();
    s2.showdata();

    if(s1==s2) //overloading operator ==
        cout<<"\nStrings are same\n";
    else
        cout<<"\nStrings are not same\n";

    cout<<"Input a string : ";
    cin>>s3; // overloading >>
    cout<<"Overloading << (output) : ";
    cout<<s3; // overloading <<
    cout<<endl;
    s3.showdata();

    return 0;
}