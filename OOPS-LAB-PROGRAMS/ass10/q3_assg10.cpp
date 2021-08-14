//Assignment 10 : Operator Overloading
//Part - A
//3. Overload Unary(~)(M) and Binary (+)(F) and (==)(M) over String Class.

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
            cout<<"The string is : "<<st;
            cout<<endl;
        }

        friend String operator +(String x, String y)   //overloading +
        {
            String temp;

            strcpy(temp.st,x.st);
            strcat(temp.st,y.st);

            return temp;
        }

        int operator ==(String x)  //overloading ==
        {
            if(strcmp(st,x.st)==0)
                return 1;
            else
                return 0;
        }

        void operator ~()  //overloading ~
        {
            strrev(st);
        }
};

int main()
{
    String s1,s2,s3;

    s1.getdata("Object oriented ");
    s2.getdata("Programming");
    s1.showdata();
    s2.showdata();

    s3=s1+s2; //overloading operator +
    cout<<"*****s3=s1+s2*****\n";
    s3.showdata();

    cout<<"\n*****After (~)*****";
    if(s1==s2) //overloading operator ==
        cout<<"\nStrings are same\n";
    else
        cout<<"\nStrings are not same\n";

    ~s3;
    cout<<endl;
    cout<<"\n*****Reversed string is*****\n";
    s3.showdata();
    
    return 0;
}