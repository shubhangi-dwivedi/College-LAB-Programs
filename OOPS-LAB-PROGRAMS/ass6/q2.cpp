//Assignment 6 : (Friend Functions and Member Function)
//2. WOOP to Swap private Data members of two different classes.

/*
NAME : SHUBHANGI DWIVEDI
ROLL NO. 1913122 
DATE : 18/02/21
*/

#include<iostream>

using namespace std;

//using friend function in two different classes
class b;
class a
{
    private:
        int x;
    public:
        void get1()
        {
            cout<<"Enter no. 1 : ";
            cin>>x;
            cout<<endl;
        }
        void show1()
        {
            cout<<"No. 1 is : "<<x<<endl;
        }
        friend void swap(a&,b&);
};

class b
{
    private:
        int y;
    public:
        void get2()
        {
            cout<<"Enter no. 2 : ";
            cin>>y;
            cout<<endl;
        }
        void show2()
        {
            cout<<"No. 2 is : "<<y<<endl;
        }
        friend void swap(a&,b&);
    
};

void swap(a &num1, b &num2)
{
    int temp;
    temp=num1.x;
    num1.x=num2.y;
    num2.y=temp;
}

int main()
{
    a a1;
    a1.get1();
    a1.show1();

    b b1;
    b1.get2();
    b1.show2();

    cout<<"Swapping data members of Class a & b :";
    swap(a1,b1);

    cout<<"\t\t Values after swapping\n";
    a1.show1();
    b1.show2();

    return 0;
}