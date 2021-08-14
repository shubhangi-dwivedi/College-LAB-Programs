//Assignment 10 : Operator Overloading
//Part - A
//2. Overload Unary (++ , - ) and Binary (*, !=) over Integer Class.

/*
NAME : SHUBHANGI DWIVEDI
ROLL NO. 1913122 
DATE : 31/03/21
*/

#include<iostream>

using namespace std;

class Integer
{
    int x;

    public:

  //  int x;
    void getdata(int a)
    {
        x=a;
    }

    void showdata()
    {
        cout<<x<<endl;
    }

    void operator ++();
    friend void operator -(Integer &z);
    Integer operator *(Integer z);
    friend int operator !=(Integer const& y, Integer const& z);
    friend int operator &&(Integer y, Integer z);
};

void Integer :: operator ++()
{
    ++x;
}

void operator -(Integer &z)
{
    z.x= -z.x; 
}

Integer Integer :: operator *(Integer z)
{
    Integer temp;
    temp.x=x*z.x;

    return (temp);
}

int operator !=(Integer const& y, Integer const& z)
{
    if(y.x != z.x)
        return 1;
    else
        return 0;
}

int main()
{
    Integer i1, i2, i3, i4, i5;
    int x, y;
    
    cout<<"Enter the value  of x : ";
    cin>>x;
    i1.getdata(x);
    ++i1;
    i1.showdata();

    cout<<"Enter the value  of y : ";
    cin>>y;
    i2.getdata(y);
    -i2;
    i2.showdata();

    i3=i1*i2;
    i3.showdata();

    if(i3!=i2)
        cout<<"i3 not equal to i2\n";
    else
        cout<<"i3 equal to i2\n";

    return 0;
}
