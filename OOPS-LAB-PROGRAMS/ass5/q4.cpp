//Assignment 5 : (inline function)
//4.(WOOP) for calculating area of circle, ractangle, triangle,square using inline functions.

/*
NAME : SHUBHANGI DWIVEDI
ROLL NO. 1913122 
DATE : 04/02/21
*/

#include<iostream>

using namespace std;

class shape
{
    public:
        double area(double r);
        int area(int l, int b);
        int area(int l);
        double area(int b, double h);
};

//area of circle
inline double shape :: area(double r)
{
    return 3.14*r*r;
} 

//area of rectangle
inline int shape :: area(int l, int b)
{
    return l*b;
}

//area of square
inline int shape :: area(int l)
{
    return l*l;
}

//area of triangle
inline double shape :: area(int b, double h)
{
    return 0.5*b*h;
}

int main()
{
    shape s;

    int ch;

    do
    {
        cout<<"\t\tEnter your choice\nTO CALULATE THE AREA OF\n1.Circle\n2.Rectangle\n3.Square\n4.Triangle\n5.EXIT\n-> ";
        cin>>ch;

        switch(ch)
        {
            case 1:
                double r;
                cout<<"Enter the radius of the circle : ";
                cin>>r;
                cout<<"Area of the circle is : "<<s.area(r)<<endl;
                break;

            case 2:
                int l, b;
                cout<<"Enter length and breadth of the rectangle resp. : ";
                cin>>l>>b;
                cout<<"Area of the rectangle is : "<<s.area(l,b)<<endl;
                break;

            case 3:
                int side;
                cout<<"Enter the side of the square : ";
                cin>>side;
                cout<<"Area of the square : "<<s.area(side)<<endl;
                break;

            case 4:
                int b2;
                double h2;
                cout<<"Enter the base and height of the triangle : ";
                cin>>b2>>h2;
                cout<<"Area of the triangle : "<<s.area(b2,h2)<<endl;
                break;

            case 5:
                cout<<"*****EXIT*****";
                break;

            default:
                cout<<"Wrong choice entered.....Enter correct input\n";
        }
    }while(ch!=5);

    return 0;
}