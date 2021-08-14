//Assignment : 10
//6. WOOP over Complex class for overloading pre ++ , post ++ and () operator on the class.

/*
NAME : SHUBHANGI DWIVEDI
ROLL NO. 1913122 
DATE : 01/04/2021
*/

#include<iostream>

using namespace std;

class complex
{
    int r,i;
    public:
        complex()
        {
            r=0;
            i=0;
        }
        
        complex(int a,int b)
        {
            r=a;
            i=b;
        }
        
        complex operator ++() // ++ (pre-increment)
        {
            complex c;
            c.r=++r;
            c.i=++i;
            return c;
        }

        complex operator ++(int) // ++ (post-increment)
        { 
            complex a;
            a.r=r++;
            a.i=i++;
            return a;
        }

        complex operator ()(int x,int y) // ()
        {
            complex c;
            c.r=x;
            c.i=y;
            return c;
        }

        void display()
        {
            cout<<"Real= "<<r<<" Imaginary= "<<i;
        }
};

int main()
{
    int a,b;

    cout<<"\nEnter real and imaginary parts: ";
    cin>>a>>b;

    complex c1(a,b);
    cout<<"\n\nc1 : ";
    c1.display();

    complex c2;
    c2=++c1;
    cout<<"\n\nc2(++c1) : ";
    c2.display();
    c2=c1++;
    cout<<"\n\nc2(c1++) : ";
    c2.display();

    cout<<"\n\nNow c1 : ";
    c1.display();

    int x,y;
    cout<<"\n\nEnter real and imaginary parts : ";
    cin>>x>>y;

    complex c3,c4;
    c3=c4(x,y);
    cout<<"\n\nc3(x,y) : ";
    c3.display();
    cout<<"\n\nc4 : ";
    c4.display();

    return 0;
}
